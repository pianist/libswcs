#include <stdio.h>
#include <swcs/charset.h>
#include <string>
#include <iostream>
#include <map>

#include "trigrams.h"

int main(int argc, char* argv[])
{
    std::string line;
    trigrams_holder th;

    while(std::getline(std::cin, line)) {
        th.process(line.c_str());
    }
    
    th.norm();
    th.print();
   
    return 0;
}
