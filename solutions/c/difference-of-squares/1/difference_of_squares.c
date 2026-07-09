#include "difference_of_squares.h"
// diferencia entre (cuadrado de la suma) y la (suma de cuadrados) de los N primeros numeros naturales

unsigned int sum_of_squares(unsigned int number){

    unsigned int i;
    unsigned int sum = 0;
    unsigned int square;

    for ( i=1 ; i <= number ; i++ ) {
        square = i*i;
        sum += square;
    }
    
    return sum;
    
}

unsigned int square_of_sum(unsigned int number){
    
    unsigned int i;
    unsigned int sum = 0;
    unsigned int square;

    for (i=1 ; i<=number ; i++){
        sum+=i;
    }

    square = sum * sum;

    return square;
    
}


unsigned int difference_of_squares(unsigned int number) {
    
    unsigned int s_squares;
    unsigned int sq_sum;
    unsigned int diff;
    
    s_squares = sum_of_squares(number);
    sq_sum = square_of_sum(number);

    diff = sq_sum - s_squares;

    return diff;
    
}