#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main (){

   int numQ, num;
   int somaP = 0;

   printf("Digite quantos numeros voce quer digitar: ");
   scanf("%d", &numQ);

   for (int i = 0; i < numQ; i++)
   {
        printf("digite um numero: ");
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            somaP = somaP + num;
        }
   }

   printf("A soma dos numero pares que voec digitou é: %d ", somaP);
   

    return 0;
}


/*
int num, result;
    int cont, cont2 = 0;
    char opt;


    while (cont != -1)
    {
           
        printf("digite o seu numero: ");
        scanf("%d", &num);
        printf("%d\n", num * num);
        cont2 = 0;

        while (cont2 == 0)
        {
        printf("deseja continuar? sim(s) não(n): ");
        scanf(" %c", &opt);
           if (opt == 's')
        {
            
                cont++;
                cont2++;
        }
        else if(opt == 'n'){
                cont = -1;
                cont2++;
        }
        else{
            printf("resposta invalida");
            }
        }   
    }
*/
/*

    int num;
    int soma = 0;

    printf("digite um numero: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        soma = soma + i;
    }
    
    printf("A soma de todos os numeros que vem antes de %d é %d", num, soma);
*/
/*
    int num;
    int cont;

    printf("digite um numero: ");
    scanf("%d", &num);
    cont = 2 * num;

    for (int i = 0; i < cont; i += 2)
    {
        printf("%d, ", i + 1);
    } 
*/
/*
    double x;
    double n;
    double result;

    printf("digite o valor de x: ");
    scanf("%lf", &x);
    printf("digite o valor de n: ");
    scanf("%lf", &n);
    n = fabs(n);

    result = pow(x, n);

    printf("%.0lf", result);
*/
/*
float nota;
    float menN = 100;
    float maiN = 0;
    int qtdN;

    printf("quantas notas são?: ");
    scanf("%d", &qtdN);

    for (int i = 0; i < qtdN; i++)
    {
        printf("digite uma nota: ");
        scanf("%f", &nota);
        if (nota <= menN)
        {
            menN = nota;
        }
        else if (nota >= maiN)
        {
            maiN = nota;
        }
        
        
    }
    
    printf("menor: %.1f, mairo: %.1f", menN, maiN);
*/
/*
 int num;
    int fatorial = 1;

    printf("digite um numero: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fatorial = fatorial * i;
    }
    
    printf("A soma de todos os numeros que vem antes de %d é %d", num, fatorial);
*/
/*
   int numQ, num;
   int somaP = 0;

   printf("Digite quantos numeros voce quer digitar: ");
   scanf("%d", &numQ);

   for (int i = 0; i < numQ; i++)
   {
        printf("digite um numero: ");
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            somaP = somaP + num;
        }
   }

   printf("A soma dos numero pares que voec digitou é: %d ", somaP);
*/
/*
    int n;
    int k;
    int j;
    int num = 0;
    int cont = 0;

    printf("digite o numero de vezes: ");
    scanf("%d", &n);

    printf("digite um numero: ");
    scanf("%d", &k);

    printf("digite um numero: ");
    scanf("%d", &j);

    while (cont < n)
    {
        if (num % k == 0 || num % j == 0)
        {
            printf("%d, ",num);
            cont++;
        }
        num++;
    }
*/
/**/
/**/