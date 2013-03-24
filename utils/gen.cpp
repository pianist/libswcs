#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <swcs/charset.h>
#include <string>
#include <iostream>
#include <map>

#include "trigrams.h"

int main(int argc, char* argv[])
{
    if (argc != 3) {
        std::cerr << "Usage: ./gen_tri cyr_out.txt lat_out.txt\n";
        return -1;
    }

    std::string line;
    trigrams_holder th;

    while(std::getline(std::cin, line)) {
        th.process(line.c_str());
    }
    
    th.norm();
    th.write(argv[1], argv[2]);
   
    return 0;
}

