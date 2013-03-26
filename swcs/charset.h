#ifndef __SW_CHARSET_H__
#define __SW_CHARSET_H__

#include <stddef.h>
#include <inttypes.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

#define SW_WP_COMPLEX   0x000001 /* complex (C++), SHOULD BE FIRST (if (SW_WP_COMPLEX < cc.cpismennost) check) */
#define SW_WP_DIGIT     0x000002 /* digit */
#define SW_WP_LATIN     0x000004 /* latin symbol */
#define SW_WP_CYRILLIC  0x000008 /* cyrillic symbol */
#define SW_WP_GREEK     0x000010
#define SW_WP_COPTIC    0x000020
#define SW_WP_ARMENIAN  0x000040
#define SW_WP_HEBREW    0x000080
#define SW_WP_CJK       0x400000 /* China, Japan, Korea */
#define SW_WP_COMBINING 0x800000 /* combining symbols: accents, tildes, overlines, dots, etc. */

#define SW_UI_UNDEF  0
#define SW_UI_LOWER  1  /* e or example */
#define SW_UI_UPPER  2  /* E or EXAMPLE */
#define SW_UI_MIXED  3  /* - or eXamPLe */
#define SW_UI_FIRST  4  /* - or Example */

#define SW_CS_UTF8       0
#define SW_CS_SHIFT_JIS  1
#define SW_CS_ISO_8859_1 2
#define SW_CS_ISO_8859_2 3
#define SW_CS_ISO_8859_3 4
#define SW_CS_ISO_8859_4 5
#define SW_CS_ISO_8859_5 6
#define SW_CS_ISO_8859_6 7
#define SW_CS_ISO_8859_7 8
#define SW_CS_ISO_8859_8 9
#define SW_CS_CP1250 10
#define SW_CS_CP1251 11
#define SW_CS_CP1252 12
#define SW_CS_CP1253 13
#define SW_CS_CP1254 14
#define SW_CS_CP1255 15
#define SW_CS_CP1256 16
#define SW_CS_CP1257 17
#define SW_CS_CP1258 18
#define SW_CS_KOI8R  19
#define SW_CS_KOI8U  20
#define SW_CS_UNDEF  21

struct swcs_char_properties
{
    unsigned cpismennost:28;
    unsigned ccase:4;
};

const struct swcs_char_properties* swcs_get_char_properties(uint16_t c);
extern const char **swcs_charset_decode [SW_CS_UNDEF];

size_t swcs_get_clen(const char* str);
uint16_t swcs_get_char(const char *str, unsigned* sz);
size_t swcs_put_char(char *out, uint16_t cucs);

int swcs_charset_by_name(const char* s);
int swcs_charset_from_content_type(const char* s);
int swcs_charset_guess(const char *s, size_t sz);
 
uint16_t swcs_tolower(uint16_t c);
void swcs_utf8_tolower(const char* in, char* out, size_t max);

// get malformed symbols urlencoded
// 0 = OK, -1 = error (not enough space)
int swcs_correct_utf8(const char* in, char* out, size_t max_len);

// Japanese-spec
uint16_t swcs_sjis_to_unicode(const char* i, size_t* sz);


#ifdef __cplusplus
}  /* extern "C" */
#endif

#endif /* __SW_CHARSET_H__ */

