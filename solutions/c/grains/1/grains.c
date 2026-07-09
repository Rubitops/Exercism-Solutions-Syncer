#include "grains.h"

uint64_t square(uint8_t index){

    uint8_t i;
    uint64_t cas;
    
    if (index == 0)
        cas = 0 ;
    else 
        cas = 1 ;

    for( i = 1 ; i < index ; i++ ){
    
        cas*=2;  
    }
    
    return cas;
}

uint64_t total(void){

    uint8_t index = 64;
    uint8_t i;
    uint64_t sum = 0 ;
    uint64_t cas;

    for( i = 1 ; i <= index ; i++ ){
        
        cas = square(i);
        sum+=cas;
    }
    
return sum;
    
}

