#include "hamming.h"

//Idea seria char por char ir comparando, si son diferentes, augmenta un contador, si uno acaba y el otro no, error.

int compute(const char *lhs, const char *rhs)
{
    int i = 0;
    int diff_counter = 0 ;
    
    while ( (lhs[i] != '\0') && (rhs[i] != '\0') )
    {
        if (lhs[i] != rhs[i])
        {
            diff_counter++;
        }

        i++;
    }

    if (lhs[i] != '\0' || rhs[i] != '\0')
        return ERROR;
    
    return diff_counter;
}

