#include "resistor_color_duo.h"

int color_code(resistor_band_t colors[])
{
    int result;
    
    result = colors[0] * 10 ;
    result += colors[1] ;

    return result;
}





