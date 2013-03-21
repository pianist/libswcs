#include <string>
#include <iostream>
#include <vector>
#include <fstream>

#include "trigrams.h"

int main(int argc, char* argv[])
{   
    if(argc == 1) {
        std::cerr << "usage: " << argv[0] << " trigram_file" << std::endl;
        return -1;
    }

    std::string line;
    trigrams_holder th;
    while(std::getline(std::cin, line)) {
        th.process(line.c_str());
    }
    th.norm();    
    
    trigrams_classifier tc;
    if(tc.load(argv[1])) {
        int lcyr, llat;
        double wcyr, wlat;
        tc.classify(th, lcyr, wcyr, llat, wlat);
        if(wcyr > 0) {
            std::cout << "Cyr." << lcyr << ":" << wcyr << std::endl;
        }
        if(wlat > 0) {
            std::cout << "Lat." << llat << ":" << wlat << std::endl;
        }
    }

    return 0;
}
