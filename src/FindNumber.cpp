#include "../include/finder.h"

unsigned int FindNumber(unsigned int devider, unsigned int bound){
    if (((int)devider <= 0) || ((int)bound <=0)){
        return 0;
    }
    unsigned int n = 0;
    for (unsigned int i=bound; i > 0; --i){
        if (i % devider == 0){
        n = i;
        break;
       } 
    }
    return n;
}