#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main (){

    char operator;
    float num1;
    float num2;
    float result;

    

    printf("insira o numero que voce irar usar: ");
    scanf("%f", &num1);

    printf("Insira o operador desejavel { + - / * }: ");
    scanf(" %c", &operator);

    printf("insira o numero que voce irar usar: ");
    scanf("%f", &num2); 

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("esse é o resultado: %.1f", result);
        break;
    case '-':
        result = num1 - num2;
        printf("esse é o resultado: %.1f", result);
        break;
    case '/':
        result = num1 / num2;
        printf("esse é o resultado: %.1f'", result);
        break;
    case '*':
        result = num1 * num2;
        printf("esse é o resultado: %.1f", result);
        break;
    case 10:
        printf("erro");
        break;   
    default:
        printf("isso não é um operador matematico");
        break;
    }
    

}