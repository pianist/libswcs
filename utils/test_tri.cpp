#include <string>
#include <iostream>
#include <vector>
#include <fstream>

#include "trigrams.h"

std::vector<trigrams_holder> trigrams;

int main(int argc, char* argv[])
{
    std::string line;
    trigrams_holder th;

    for(int i = 1; i < argc; i++) {
        trigrams.push_back(trigrams_holder());
        
        std::ifstream ifs(argv[i]);
        while(std::getline(ifs, line)) {
            trigrams.back().load((char*)line.c_str());
        }
    }

    while(std::getline(std::cin, line)) {
        th.process(line.c_str());
    }
   
    if(th.chars_count()) { 
        printf("#(CYR): %d of %d\n", th.chars_count(SW_WP_CYRILLIC), th.chars_count());
        printf("#(LAT): %d of %d\n", th.chars_count(SW_WP_LATIN), th.chars_count());
        
        th.norm();    
        for(int i = 1; i < argc; i++) {
            double res = th.distance(trigrams[i - 1]);
            std::cout << argv[i] << "\t" << res << std::endl;
        } 
    }
    return 0;
}
