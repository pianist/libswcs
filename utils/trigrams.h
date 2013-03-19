#ifndef TRIGRAMS_CALC_H
#define TRIGRAMS_CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <swcs/charset.h>
//#include <string>
#include <string.h>
//#include <iostream>
#include <map>

union trigram_t {
    uint64_t _all;
    struct {
        uint16_t chars[3];
        uint16_t _rest;
    };

    trigram_t(uint16_t c1 = 0, uint16_t c2 = 0, uint16_t c3 = 0)
    {
        chars[0] = c1;
        chars[1] = c2;
        chars[2] = c3;
        _rest = 0;  
    }

    void clear()
    {
        _all = 0;
    }

    void print()const
    {         
        char str[8];
        for(int i = 0; i < 3; i++) {
            unsigned r = swcs_put_char(str, chars[i]);
            printf("%.*s", r, str); 
        }
    }
};

namespace std {
    template<> struct less<trigram_t>
    {
        bool operator()(const trigram_t& t1, const trigram_t& t2)const
        {
            return t1._all < t2._all;
        }
    };
}

typedef std::map<trigram_t, double> tri_map_t;

class trigrams_holder
{
    tri_map_t trigrams;
    trigram_t cur_trig;
    int pos;
public:
    trigrams_holder() 
        : pos(0) 
    {}
    void reset()
    {
        pos = 0;
    }

    void process(const char * line)
    {
        trigram_t curr_trigram;
        while(*line) {
            unsigned sz; 
            uint16_t ch = swcs_tolower(swcs_get_char(line, &sz));  
            line += sz;

            if(ch) {
                push_char(ch);
            }
        }
    }

    void push_char(uint16_t ch)
    {
        if(pos < 2)
            cur_trig.chars[pos + 1] = ch;
        else {
            trigram_t tr(cur_trig.chars[1],cur_trig.chars[2], ch);
            trigrams[tr]++;
            cur_trig = tr;
        }
        pos++;
    }

    void print()const
    {   
        for(tri_map_t::const_iterator i = trigrams.begin(); i != trigrams.end(); ++i) {
            i->first.print();
            printf("\t%.6f\n", i->second);  
        }    
    }

    void norm()
    {
        size_t sz = trigrams.size();
        for(tri_map_t::iterator i = trigrams.begin(); i != trigrams.end(); ++i) {
            i->second /= sz;
        }
    }

    void load(char * line)
    {
        trigrams.clear();
        char * tab = strchr(line, '\t');
        if(tab) {
            trigram_t tr;
            double w = atof(tab + 1);
            *tab = 0;
            int i;
            for(i = 0; i < 3 && *line; i++) {
                unsigned sz; 
                uint16_t ch = swcs_tolower(swcs_get_char(line, &sz));  
                line += sz;
                tr.chars[i] = ch;
            }
            if(i == 3)
                trigrams[tr] = w;
        }
    }

    double distance(const trigrams_holder& other)const
    {
        double sum = 0;
        for(tri_map_t::const_iterator i = trigrams.begin(); i != trigrams.end(); ++i) {
            tri_map_t::const_iterator f = other.trigrams.find(i->first); 
            if(f != other.trigrams.end()) {
                sum += i->second * f->second;
            }
        }
        return sum;
    }
};

#endif
