#include <stdio.h>

int main(){

    int a;
    int b;

    //isso aqui ta sendo ignorado. tadinho.
    /*
    isso
    esta
    sendo
    multi
    ignorado.
    tadinhos.
    */

    printf("Fala mundo\n");
    scanf("%d", &a);
    scanf("%d", &b);

    int c = a + b;

    printf("soma: %d", c);
    
    return 0;
}