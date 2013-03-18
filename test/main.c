#include <stdio.h>
#include <swcs/charset.h>
#include <string.h>

void test_1()
{
    const char* s1 = "а4ΑԱא㐬";

    while (*s1)
    {
        unsigned sz;
        uint16_t c = swcs_get_char(s1, &sz);
        s1 += sz;

        const struct swcs_char_properties* props = swcs_get_char_properties(c);
        char buf[8];
        sz = swcs_put_char(buf, c);
        printf("Pismennost = 0x%06X: char = 0x%04x - %.*s\n", props->cpismennost, c, sz, buf);
    }
}

void test_2()
{
    const char* s1 = "ЁЖИК В ТУМАНЕ MULTIK: Ա";
    char buf[256];
    swcs_utf8_tolower(s1, buf, 256);

    printf("     SOURCE: %s\nDESTINATION: %s\n", s1, buf);
}

void test_3()
{
    const char* s1 = "text/plain; charset=shift_jis";

    if (swcs_charset_from_content_type(s1) != SW_CS_SHIFT_JIS)
    {
        fprintf(stderr, "Incorrect swcs_charset_from_content_type()!\n");
        return;
    }

    const char* s2 = "\xe4\x65";
    size_t sz;
    uint16_t c = swcs_sjis_to_unicode(s2, &sz);

    char buf[8];
    sz = swcs_put_char(buf, c);
    printf("Decoded japanese 0xe4 0x65: c = 0x%04X, %.*s\n", c, (unsigned)sz, buf);
}

void test_4()
{
    const char* s = "abc абв \xde \xad \xbe \xef";

    char buf[256];
    int r1 = swcs_correct_utf8(s, buf, 256);
    printf("CORRECTED-1, sz = %d: %s\n", r1, buf);

    int r2 = swcs_correct_utf8(s, buf, 19);
    printf("CORRECTED-2, sz = %d: %s\n", r2, buf);
}

void test_5()
{
    const char* s = "Мама мыла раму, папа помыл структуру!";

    int cs = swcs_charset_guess(s, strlen(s));
    printf("cs = %d, should be 0\n", cs);
}

int main(int argc, char** argv)
{
    test_1();
    test_2();
    test_3();
    test_4();
    test_5();

    return 0;
}

