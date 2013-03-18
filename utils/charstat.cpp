#include <swcs/charset.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <map>

struct charstat_t
{
    uint16_t count;
    uint16_t count_upper;
    charstat_t()
      : count(0)
      , count_upper(0)
    {
    }
};

typedef std::map<uint16_t, charstat_t> charstats_t;

charstats_t chst;

void process_line(const char* s)
{
    while (*s)
    {
        unsigned sz;
        uint16_t c = swcs_get_char(s, &sz);
        s += sz;

        if (c)
        {
            const struct swcs_char_properties* prop = swcs_get_char_properties(c);
            if (prop->cpismennost == SW_WP_CYRILLIC)
            {
                uint16_t cl = swcs_tolower(c);
                charstat_t& cst = chst[cl];
                cst.count++;
                if (c != cl) cst.count_upper++;
//                char buf1[8];
//                char buf2[8];
//                unsigned sz1 = swcs_put_char(buf1, c);
//                unsigned sz2 = swcs_put_char(buf2, cl);
//                if (c != cl) printf("was %.*s now %.*s\n", sz1, buf1, sz2, buf2);

            }
        }
    }
}

void print_stat()
{
    charstats_t::const_iterator it;
    for (it = chst.begin(); it != chst.end(); ++it)
    {
        char buf[8];
        unsigned sz = swcs_put_char(buf, it->first);
        printf("%u\t0x%04X\t%.*s\n", it->second.count, it->first, sz, buf);
    }
}

void process_file(const char* fname)
{
    FILE* f = fopen(fname, "r");
    if (!f)
    {
        fprintf(stderr, "can't open %s: (%d) %s\n", fname, errno, strerror(errno));
        return;
    }

    while (!feof(f))
    {
        char buf[8192];
        if (fgets(buf, 8192, f))
        {
            process_line(buf);
        }
    }

    fclose(f);
}


int main(int argc, char** argv)
{
    if (argc < 2)
    {
        fprintf(stderr, "%s f1.txt f2.txt ... fN.txt\n", argv[0]);
        return -1;
    }

    for (int i = 1; i < argc; ++i)
    {
        process_file(argv[i]);
    }

    print_stat();
}

