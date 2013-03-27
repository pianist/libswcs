#include "charset.h"
#include "charset_maps.h"
#include <string.h>
#include <ctype.h>

int swcs_charset_by_name(const char* s)
{
    if (!strncasecmp(s, "utf8", 4)) return SW_CS_UTF8;
    if (!strncasecmp(s, "utf-8", 4)) return SW_CS_UTF8;

    if (!strncasecmp(s, "iso-", 4))
    {
        if (!strncasecmp(s, "iso-8859-1", 10)) return SW_CS_ISO_8859_1;
        if (!strncasecmp(s, "iso-8859-2", 10)) return SW_CS_ISO_8859_2;
        if (!strncasecmp(s, "iso-8859-3", 10)) return SW_CS_ISO_8859_3;
        if (!strncasecmp(s, "iso-8859-4", 10)) return SW_CS_ISO_8859_4;
        if (!strncasecmp(s, "iso-8859-5", 10)) return SW_CS_ISO_8859_5;
        if (!strncasecmp(s, "iso-8859-6", 10)) return SW_CS_ISO_8859_6;
        if (!strncasecmp(s, "iso-8859-7", 10)) return SW_CS_ISO_8859_7;
        if (!strncasecmp(s, "iso-8859-8", 10)) return SW_CS_ISO_8859_8;
    }

    if (!strncasecmp(s, "windows-12", 10))
    {
        if (!strncasecmp(s, "windows-1250", 12)) return SW_CS_CP1250;
        if (!strncasecmp(s, "windows-1251", 12)) return SW_CS_CP1251;
        if (!strncasecmp(s, "windows-1252", 12)) return SW_CS_CP1252;
        if (!strncasecmp(s, "windows-1253", 12)) return SW_CS_CP1253;
        if (!strncasecmp(s, "windows-1254", 12)) return SW_CS_CP1254;
        if (!strncasecmp(s, "windows-1255", 12)) return SW_CS_CP1255;
        if (!strncasecmp(s, "windows-1256", 12)) return SW_CS_CP1256;
        if (!strncasecmp(s, "windows-1257", 12)) return SW_CS_CP1257;
        if (!strncasecmp(s, "windows-1258", 12)) return SW_CS_CP1258;
    }

    if (!strncasecmp(s, "koi8", 4))
    {
        if (!strncasecmp(s, "koi8r", 5)) return SW_CS_KOI8R;
        if (!strncasecmp(s, "koi8-r", 6)) return SW_CS_KOI8R;
        if (!strncasecmp(s, "koi8u", 5)) return SW_CS_KOI8U;
        if (!strncasecmp(s, "koi8-u", 6)) return SW_CS_KOI8U;
    }

    if (!strncasecmp(s, "shift_jis", 9)) return SW_CS_SHIFT_JIS;
    if (!strncasecmp(s, "shift-jis", 9)) return SW_CS_SHIFT_JIS;

    return SW_CS_UNDEF;
}

static char *cda_stristr(const char *s, const char *n)
{
    const char *w;
    const char *x;

    if (!s || !*s) return NULL;
    if (!n || !*n) return (char *) s;

    for (; *s; ++s)
    {
        if (tolower(*s) == tolower(*n))
        {
            for (w = s, x = n; *w && *x; ++w, ++x)
            {
                if (tolower(*w) != tolower(*x)) break;
            }

            if (!*x) return (char *) s;
        }
    }

    return NULL;
}


int swcs_charset_from_content_type(const char* s)
{
    const char* charset = cda_stristr(s, "charset=");
    if (charset) return swcs_charset_by_name(charset + 8);

    return SW_CS_UNDEF;
}

inline static size_t __sw_charset_get_clen(const char *str)
{
    u_char code = (u_char) *str;

    if (        (code < 0x80)) return 1;
    if (0xc0 == (code & 0xe0)) return 2;
    if (0xe0 == (code & 0xf0)) return 3;
    if (0xf0 == (code & 0xf8)) return 4;
    if (0xf8 == (code & 0xfc)) return 5;
    if (0xfc == (code & 0xfe)) return 6;

    return 1;
}

size_t swcs_get_clen(const char *str)
{
    return __sw_charset_get_clen(str);
}

uint16_t swcs_get_char(const char *str, unsigned* sz)
{
    u_char *s = (u_char *) str;
    uint32_t size = __sw_charset_get_clen(str);
    if (sz) *sz = size;
    uint16_t code = 0;

    switch (size)
    {
    case 1 : code = ((s[0] < 0x80) ? s[0] : 0x00); break;
    case 2 :
        if (s[0] < 0xc2 || s[0] > 0xdf || s[1] < 0x80 || s[1] > 0xbf) return 0;
        code = ((s[0] & 0x1f) << 6) + (s[1] & 0x3f);
        break;
    case 3 :
        if ((s[0] & 0xe0) != 0xe0) return 0;
        if (s[1] < 0x80) return 0;
        if (s[2] < 0x80) return 0;
        if (s[1] > 0xbf) return 0;
        if (s[2] > 0xbf) return 0;

        code = ((s[0] & 0x0f) << 12) + ((s[1] & 0x3f) << 6) + (s[2] & 0x3f);
        break;
    default: code = 0x00; /* code = 0x00 is always delimiter */
    }

    return code;
}

static const char* hex_num = "0123456789ABCDEF";

int swcs_correct_utf8(const char* in, char* out, size_t max_len)
{
    size_t cnt = 0;
    size_t cnt_out = 0;
    uint16_t ch; 
    unsigned sz; 
    while (*in)
    {   
        ch = swcs_get_char(in, &sz);
        if (ch)
        {   
            cnt += sz; 
            while (sz--)
            {   
                *out = *in;
                ++out;
                ++in;
                ++cnt_out;
            }   
        }   
        else
        {   
            if (cnt_out + 4 >= max_len)
            {   
                *out = 0;
                return -1; 
            }   
            *out = '%';
            ++out;

            unsigned char p = (unsigned char)*in;
            *out = hex_num[p / 16];
            ++out;
            *out = hex_num[p % 16];
            ++out;
            cnt++;
            cnt_out += 3;
            ++in;
        }
        if (cnt >= max_len || cnt_out >= max_len)
        {
            *out = 0;
            return -1;
        }
    }
    *out = 0;
    return 0;
}

size_t swcs_put_char(char* out, uint16_t cucs)
{
    if (cucs <= 0x007f)
    {
        out[0] = cucs;
        return 1;
    }

    if (cucs <= 0x07ff)
    {
        out[0] = (cucs >> 6) | 0xc0;
        out[1] = (cucs & 0x3f) | 0x80;
        return 2;
    }

    out[0] = (cucs >> 12) | 0xe0;
    out[1] = ((cucs >> 6) & 0x3f) | 0x80;
    out[2] = (cucs & 0x3f) | 0x80;
    return 3;
}

int swcs_charset_guess(const char *s, size_t sz)
{
    const u_char *p = (const u_char *) s;
    const u_char *e = p + sz;

    unsigned rus = 0;    /* non-ascii letters  */
    unsigned d01 = 0;    /* 2-byte utf-8 prefs */
    unsigned wup = 0;    /* cp1251 uppercase   */
    unsigned w_all = 0;  /* cp1251 all russian */
    unsigned k8u = 0;    /* koi8-u ukr-chars   */
    unsigned broken_utf = 0;
    unsigned rus_i_kr = 0;    /* russian letter i short */
    unsigned rus_tvzn_ya = 0; /* russian letters from hard sign to ya */
    unsigned charstat[32] = {0};

    for (; p < e; )
    {
        unsigned clen = 1;
        if ((*p & 0x80) != 0)
        {
            clen = __sw_charset_get_clen((const char*)p);
            if (clen < 2 || clen > 3) broken_utf++;

            ++rus;

            if (*p == 0xD0 || *p == 0xD1) ++d01;
            if (*p >= 0xC0 && *p <= 0xDF) ++wup;
            if (*p >= 0xC0) ++w_all;
            if (*p == 0xe9) ++rus_i_kr;
            if (*p >= 0xE0) charstat[*p & 0x1f]++;
            if (*p >= 0xfb) ++rus_tvzn_ya;

            if (*p == 0xA4 || *p == 0xB4 ||
                *p == 0xA6 || *p == 0xB6 ||
                *p == 0xA7 || *p == 0xB7 ||
                *p == 0xAD || *p == 0xBD
            )
            {
                ++k8u;
            }
        }
        p += clen;
    }

    if (!broken_utf) return SW_CS_UTF8;

    if ((broken_utf <= 7) && (rus > 1000)) return SW_CS_UTF8;

//printf("broken_utf = %u, w_all = %u, wup = %u, rus = %u\n", broken_utf, w_all, wup, rus);
    if ((10 * w_all > 9 * rus) && (wup * 5 < w_all))
    {
        unsigned more_than_i_kr = 0;
        unsigned i;
        for (i = 0; i < 32; ++i) if (charstat[i] > rus_i_kr) ++more_than_i_kr;

        // we predict windows-1255 iff rus_tvzn_ya = 0 and rus_i_kr is in top-3 of small rus letters
        if ((rus_tvzn_ya < 3) && (more_than_i_kr < 3)) return SW_CS_CP1255;

        return SW_CS_CP1251;
    }


    if (rus * 3 < (wup + k8u) * 4)
    {
        if (rus < k8u * 20)
        {
            return SW_CS_KOI8U;
        }

        return SW_CS_KOI8R;
    }

    return SW_CS_UNDEF;
}

uint16_t swcs_tolower(uint16_t iChar)
{
    int iLBound = 0;
    int iRBound = sizeof(mUCSU2L) / sizeof(UCSTransMap) - 1;
    unsigned int iUC;
    int iPos;

    /* Binary search */
    for(;;)
    {
        iPos = (iRBound + iLBound) >> 1;
        iUC = mUCSU2L[iPos].sc;

        if (iUC > iChar)
        {
            iRBound = iPos;
        }
        else if (iUC < iChar)
        {
            iLBound = iPos;
        }
        else
        {
            return mUCSU2L[iPos].dc;
        }

        if (iRBound - iLBound <= 1)
        {
            if (iChar == mUCSU2L[iRBound].sc) return mUCSU2L[iRBound].dc;
            if (iChar == mUCSU2L[iLBound].sc) return mUCSU2L[iLBound].dc;
            return iChar;
        }
    }
    return 0;
}

void swcs_utf8_tolower(const char* in, char* out, size_t max)
{
    while (max > 6 && *in)
    {
        unsigned sz = 1;
        uint16_t c = swcs_tolower(swcs_get_char(in, &sz));

        if (0 == c)
        {
            in++;
        }
        else
        {
            swcs_put_char(out, c);
            max -= sz;
            out += sz;
            in += sz;
        }
    }
    *out = 0;
}

