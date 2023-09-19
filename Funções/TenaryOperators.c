#include <stdio.h>

int FindMax(int x, int y){

    return (x > y) ? x : y;
    
}

int main(){

    //tenary function = basicamente é um tipo de if else para resultados de assigning/returning
    // (condition) ? value if true : value if false


    int max = FindMax(111, 8);

    printf("%d", max);

    return 0;
}

/*
NOME: BOB
  ---------
 /         \
 | D     D |
 |    U    |
 |   ===   |
 \---------/






>_<
O_O
    .-.  .-.
    ._.  ._.

   |\______/|
   \________/



 */
