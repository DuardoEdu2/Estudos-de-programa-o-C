#include <stdio.h>

int main(){
    
    int num;
    int par;
    int cont = 0;

    //for loop: repeat a part of a code a limited number of times

    printf("coloque o número: ");
    scanf("%d", &num);

    for(cont; cont < num; cont++){
        if (cont % 2 == 0){
            printf("numero par: %d\n", cont);
            printf("quadrado: %d\n ", cont*cont);
        }
    }

    return 0;

}







/*
#include <stdio.h>
int main(){
    float num1;
    float med = 0;
    float qqtn = 0;
    float cont = 0;
    do{
        printf("digite um número: ");
        scanf("%f", &num1);
        if (num1 >= 0 )
        {med = med + num1;
            qqtn ++;
            cont ++;}   
    }
    while(cont != 6);
    printf("a quantidade de positivos é %f e a media deles é %f", qqtn, med/qqtn);
    return 0;
}
*/


