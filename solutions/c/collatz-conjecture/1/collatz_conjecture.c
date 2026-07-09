#include "collatz_conjecture.h"

int steps(int Start) 
{
    unsigned int Steps = 0;

    if (Start <= 0)
        return ERROR_VALUE ;
    
    while (Start != 1)
    {
        if ( (Start % 2) == 0 ) 
        {
            Start /= 2 ;
        }
        
        else 
        {
            Start = (Start * 3) + 1 ;
        }

        Steps ++ ;
    }
    
    return Steps ;
}