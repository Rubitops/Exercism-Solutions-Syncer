#include "space_age.h"


const float year_ratio[] = 
{
    [MERCURY] = 0.2408467f ,
    [VENUS] = 0.61519726f ,
    [EARTH] = 1.0f ,
    [MARS] = 1.8808158f ,
    [JUPITER] = 11.862615f ,
    [SATURN] = 29.447498f ,
    [URANUS] = 84.016846f ,
    [NEPTUNE] = 164.79132f ,
} ;

float age(planet_t planet, int64_t seconds) 
{
    float earth_years;
    float result;

    if ((planet < MERCURY) || (planet > NEPTUNE)  )
        return -1.0f ;
    
    earth_years = (float)seconds / (float)SECONDS_IN_EARTH_YEAR ; 

    result = earth_years / year_ratio[planet];

    return result ;
}
    
