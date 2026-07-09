#include "darts.h"
#include <math.h>
#include <stdint.h>

uint8_t score(coordinate_t landing_position)
{
    float hipotenuse;
    
    hipotenuse = sqrt((landing_position[0] * landing_position[0]) + (landing_position[1] * landing_position[1]));

    if (hipotenuse <= 1 )
        return 10;
    else if (hipotenuse <= 5  )
        return 5;
    else if (hipotenuse <= 10 )
        return 1;
    else 
        return 0;
}
