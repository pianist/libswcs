#ifndef TRIGRAMS_CALC_H
#define TRIGRAMS_CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <map>

#include <swcs/charset.h>

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

    void print(FILE * fp)const
    {         
        char str[8];
        for(int i = 0; i < 3; i++) {
            unsigned r = swcs_put_char(str, chars[i]);
            fprintf(fp, "%.*s", r, str); 
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
    tri_map_t cyr_trigrams;
    tri_map_t lat_trigrams;
    
    trigram_t cyr_t;
    trigram_t lat_t;
    int cyr_pos;
    int lat_pos;
    
    uint32_t curr_writing;
    

public:
    uint32_t cyr_stats;
    uint32_t lat_stats;
    uint32_t com_stats;
    
    trigrams_holder() 
        : cyr_pos(0)
        , lat_pos(0)
        , curr_writing(0)
        , cyr_stats(0) 
        , lat_stats(0) 
        , com_stats(0) 
    {}                    
    
    void clear()
    {
        cyr_pos = 0;
        lat_pos = 0;
        curr_writing = 0;
        cyr_stats = 0;
        lat_stats = 0;
        com_stats = 0;
        
        cyr_trigrams.clear();
        lat_trigrams.clear();
    }

    void process(const char * line)
    {          
        while(*line) {
            unsigned sz;
            uint16_t c = swcs_get_char(line, &sz);
            line += sz;
            
            const struct swcs_char_properties* prop = swcs_get_char_properties(c);
            uint16_t chl = swcs_tolower(c);  

            if(chl) {
                uint32_t writing = prop->cpismennost;
                if(writing == SW_WP_COMBINING)
                    writing = curr_writing;
                
                switch(writing) {
                    case SW_WP_CYRILLIC:
                        cyr_stats++;
                        push_cyr_char(chl);
                        lat_pos = 0;
                        break;
                    case SW_WP_LATIN:
                        lat_stats++;
                        push_lat_char(chl);
                        cyr_pos = 0;
                        break;
                    default:
                        cyr_pos = 0;
                        lat_pos = 0;
                        break;
                }
                com_stats++;
                curr_writing = prop->cpismennost;
            }
        }
    }
    
    void push_cyr_char(uint16_t ch)
    {
        if(cyr_pos < 2)
            cyr_t.chars[cyr_pos + 1] = ch;
        else {
            trigram_t tr(cyr_t.chars[1], cyr_t.chars[2], ch);
            cyr_trigrams[tr]++;
            cyr_t = tr;
        }
        cyr_pos++;
    }
    
    void push_lat_char(uint16_t ch)
    {
        if(lat_pos < 2)
            lat_t.chars[lat_pos + 1] = ch;
        else {
            trigram_t tr(lat_t.chars[1], lat_t.chars[2], ch);
            lat_trigrams[tr]++;
            lat_t = tr;
        }
        lat_pos++;
    }
 
    void write(const char * fn, const tri_map_t& tri)const
    {   
        FILE * fp = fopen(fn, "wt");
        if(fp) {
            for(tri_map_t::const_iterator i = tri.begin(); i != tri.end(); ++i) {
                i->first.print(fp);
                fprintf(fp, "\t%.10f\n", i->second);  
            }
        } else { 
            fprintf(stderr, "can't open %s: (%d) %s\n", fn, errno, strerror(errno));
        }
    }
    
    void write(const char * fn_cyr, const char * fn_lat)const
    {   
        write(fn_cyr, cyr_trigrams);
        write(fn_lat, lat_trigrams);
    }

    void norm(tri_map_t& tr)
    {
        size_t sz = tr.size();
        if(sz) {
            for(tri_map_t::iterator i = tr.begin(); i != tr.end(); ++i) {
                i->second /= sz;
            }
        }   
    }

    void norm()
    {
        norm(cyr_trigrams);
        norm(lat_trigrams);
    }
   
    void load(char * line, double w, tri_map_t& t)
    {
        trigram_t tr;
        int i;
        for(i = 0; i < 3 && *line; i++) {
            unsigned sz; 
            uint16_t ch = swcs_tolower(swcs_get_char(line, &sz));  
            line += sz;
            tr.chars[i] = ch;
        }
        if(i == 3) {
            t[tr] = w;
        }
    } 
    
    void load_cyr(char * line_cyr, double w)
    {            
        load(line_cyr, w, cyr_trigrams);
    }

    void load_lat(char * line_lat, double w)
    {
        load(line_lat, w, lat_trigrams);
    }
    
    double distance(const tri_map_t& th, const tri_map_t& oth)const
    {
        double sum = 0;
        for(tri_map_t::const_iterator i = th.begin(); i != th.end(); ++i) {
            tri_map_t::const_iterator f = oth.find(i->first); 
            if(f != oth.end()) {
                sum += i->second * f->second;
            }
        }
        return sum;
    }
    
    void distance(const trigrams_holder& other, double& w_cyr, double& w_lat)const
    {   
        w_cyr = 0;
        w_lat = 0;
        
        if(cyr_stats  > 0.3 * com_stats) {
            w_cyr = distance(cyr_trigrams, other.cyr_trigrams);
        }
        
        if(lat_stats  > 0.3 * com_stats) {
            w_lat = distance(lat_trigrams, other.lat_trigrams);
        }
    }
};

class trigrams_classifier
{
    typedef std::map<int, trigrams_holder> trigrams_collection_type;
    trigrams_collection_type trigrams;

public:
    bool load(const char * fn)
    {
        FILE * fp = fopen(fn, "rt");
        if(fp) {
            char line[8192];
            while(!feof(fp)) {
                if(fgets(line, 8191, fp)) {
                    char * symc = strchr(line, '\t');
                    if(symc) {
                        *symc++ = '\0';
                        char * langc = strchr(symc, '\t');
                        if(langc) {
                            *langc++ = '\0';
                            char * wc = strchr(langc, '\t');
                            if(wc) {
                                *wc++ = '\0';
                                int cyr = atoi(symc);
                                int lang = atoi(langc);
                                double w = atof(wc);

                                if(cyr)
                                    trigrams[lang].load_cyr(line, w);
                                else
                                    trigrams[lang].load_lat(line, w);
                            }
                        }
                    }
                }
            }        
            fclose(fp);
            return true;
        } else {
            fprintf(stderr, "can't open %s: (%d) %s\n", fn, errno, strerror(errno));
            return false;
        }
    }
 
    void classify(trigrams_holder& th, int& lcyr, double& wcyr, int& llat, double& wlat)
    {
        lcyr = -1;
        llat = -1;
        wcyr = 0;
        wlat = 0;

        for(trigrams_collection_type::const_iterator i = trigrams.begin(); i != trigrams.end(); ++i) {
            double cur_cyr, cur_lat;
            th.distance(i->second, cur_cyr, cur_lat);
            
            if(cur_cyr > wcyr) {
                wcyr = cur_cyr;
                lcyr = i->first;
            }
            
            if(cur_lat > wlat) {
                wlat = cur_lat;
                llat = i->first;
            }
        }    
    }
};
#endif
