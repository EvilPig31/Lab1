#include <iostream>
#include "include/finder.h"

int main(){
    unsigned int devider;
    unsigned int bound;
    std::cout << "Please type devider and bound: " << std::endl;
    std::cin >> devider >> bound;
    if (FindNumber(devider, bound) != 0){
        std::cout << "Found number : " << FindNumber(devider, bound) << std::endl;
    } else {std::cerr << "Error message : Unsuitable data" << std::endl;}
    return 0;
}

