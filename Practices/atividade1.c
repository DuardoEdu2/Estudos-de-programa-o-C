#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main (){
    //esse sutaque é da onde?

    int num, result;
    int cont, cont2 = 0;
    int cont3 = 1;
    char opt;
    char armz[70];

    while (cont != -1)
    {
        /* code */    
        printf("digite o seu numero: ");
        scanf("%d", &num);
        result = num*num;
        cont2 = 0;

        while (cont2 == 0)
        {
        printf("deseja continuar? sim(s) não(n): ");
        scanf(" %c", &opt);
           if (opt == 's')
        {
            /* code */
                armz[cont] = result;
                cont++;
                cont2++;
                cont3++;
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
    for (int i = 0; i <= cont3; i++)
    {
        /* code */
            printf(" %s", armz[i]);
    }

    return 0;
}