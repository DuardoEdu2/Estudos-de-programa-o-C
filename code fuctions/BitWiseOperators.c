#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef char array[25];

//BITWISE OPERATORS = são operadores especias usados em bit level programming

// & = AND
// | = OR
// ^ = XOR (EXCLUSIVE(OR) [que tanha apenas 1])
// << -left- shift
// >> -right shift
// ~ COmplemtor operator Ver depois ele não mostrou


int main(){

    int x = 6; //binary: 00000110 = 6
    int y = 12;//binary: 00001100 = 12
             //AND of z: 00000100 = 4
             //OR  of z: 00001110 = 14
             //XOR of z: 00001010 = 10
    int z = 0; //binary: 00000000 = 0

    z = x & y;

    printf("AND = %d\n", z);

    z = x | y;

    printf("OR = %d\n", z);

    z = x ^ y;

    printf("XOR = %d\n", z);

    z = x << 1;

    printf("SHIFT LEFT = %d\n", z);

    // >> does this -> 00000110 >> 00000011 >> 00000001 >> 00000000

    z = x >> 0;

    printf("SHIFT RIGHT = %d\n", z);

}