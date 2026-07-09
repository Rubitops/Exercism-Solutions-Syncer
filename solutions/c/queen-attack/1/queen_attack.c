#include "queen_attack.h"
#include <stdlib.h>

attack_status_t can_attack(position_t queen_1, position_t queen_2)
{
    int8_t dif_row;
    int8_t dif_column;
    //Comprovaciones;
    if ( queen_1.row == queen_2.row && queen_1.column == queen_2.column)
    {
        return INVALID_POSITION;
    }
    if ( queen_1.row > 7 ||queen_2.row > 7 || queen_1.column > 7 || queen_2.column > 7)
    {
        return INVALID_POSITION;
    }
    
    
    //Si estan en la misma columna o fila, se pueden atacar
    //Diagonales es arriba derecha [-1,+1] , arriba izquierda [-1,-1], abajo derecha[+1,+1]
    //abajo izquierda [+1,-1]

    /* Resumiendo logica, primero restar i. --> Caso que esta en la misma fila resta = 0
        Caso que esta en la misma columna, restar i = int, restar j = 0 
        Caso que esta en diagonal arriba derecha [3,2][1,4] primero restar 3-1 = 2 luego 2-4=2
        Caso que esta en diagona arriba izquierda [3,2][1,0] primero restar 3-1 y = 2 luego 2-0 = 2
        Caso que esta en diagonal abajo derecha [3,2][6,5] 3-6 = -3 2-5=-3
        Caso que esta en diagonal abajo izquierda[3,2] [5,0] 3-5=-2 2-0 = 2
    [x,y][x-1,y+1]
    [x,y][x-1,y-1]
    [x,y][x+1,y+1]
    [x,y][x+1,y-1]
    */
    
    dif_row = abs(queen_1.row - queen_2.row);
    dif_column = abs(queen_1.column - queen_2.column);

    if ( dif_row == 0 || dif_column == 0 || (dif_row == dif_column) )
    {
        return CAN_ATTACK;
    }
    else
    {
        return CAN_NOT_ATTACK;
    }

    

}
