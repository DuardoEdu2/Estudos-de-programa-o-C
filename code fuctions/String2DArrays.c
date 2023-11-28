#include <stdio.h>
#include <string.h>

int main(){

// array = parecido como uma lista é um tipo de dado que consegue armazenar multiplos valores de mesmo tipo.

    char name[15] = "HollowKnight";
    char jogos[][20] = {{"Roadwarden"}, {"BobSponge"}, {"TheLastFaith"}};
    
    strcpy(jogos[1], "SlayThePrincess");


    for (int i = 0; i < (sizeof(jogos) / sizeof(jogos[0])); i++)
    {
        printf("%s\n", jogos[i]);
    }
    



}