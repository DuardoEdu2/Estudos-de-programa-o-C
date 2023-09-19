#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main (){

    int num;
    int num2;
    int soma;

    printf("quanto numeros a media tem?\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        /* code */
        printf("digite um numero: ");
        scanf("%d", &num2);
        soma = soma + num2;
    }

    printf("a média é: %d", soma/num);
    


}