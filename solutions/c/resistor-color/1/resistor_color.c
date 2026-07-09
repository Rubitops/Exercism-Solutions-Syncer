#include "resistor_color.h"

#define N_COLOR_BAND 9

int color_code(resistor_band_t color) {

    int num = color;
    return num;
    
}

resistor_band_t *colors(void) { 
    
     static resistor_band_t list[] = {
        BLACK,
        BROWN,
        RED,
        ORANGE,
        YELLOW,
        GREEN,
        BLUE,
        VIOLET,
        GREY,
        WHITE
    };

    return list;
}

