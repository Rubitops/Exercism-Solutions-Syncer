#include "leap.h"

bool leap_year (int year) {
    // every year that is evenly divisible by 4 is a leap year
    // a no ser que el año sea divisible por 100
        // en ese caso solo es si tambien es divisible por 400

    if ((( year % 4 ) == 0 ) && ((year % 100) != 0))
        return true;
    else if (((year % 100) == 0) && ((year % 400) == 0))
        return true;
    else
        return false;
}
