#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
typedef char array[25];



int main(){

    //Pseudo Ramdom Numbers = Um conjunto de valores ou elementos que são estastisticamente aleatorios
    //(Não funcionam para nemhum proposito criptografico)

    srand(time(0));

    //RAND - te da um numero aleatorio entre 0 e 32,767

    int number1 = (rand() % 6) + 1;
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);



    return 0;

}
