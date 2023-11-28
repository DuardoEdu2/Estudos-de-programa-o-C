#include <stdio.h>
#include <string.h>

int PerguntaNum (int e){
    printf("Qual a quantidade de letras que sua plavra possui?\n");
    scanf("%d", &e);
    return e;
}

void MenuInicial(int h, char x[h], char y[h], char z[h],char a, char b, int t, int r){

    printf("-----------------------------------------------");
    printf("***QUE COMECEM OS JOGOS MORTAIS***");
    printf("-----------------------------------------------\n");


    while (r == 0)
    {
    
    printf("palavra: %s\n", z);

    printf("voce deseja chutar a resposta ou uma letra? (r) ou (l)\n");
    scanf(" %c", &b);

    if (b == 'l')
    {
        printf("digite o seu chute\n");
        scanf(" %c", &a);
        for (int i = 0; i < h; i++)
    {
        if (x[i] == a)
        {
            z[i] = a;
        }
        
    }
    }
    else{
    printf("Qual a sua Palavra?\n");
    scanf(" %s", &y);
    if (strcmp(x, y) == 0)
    {
        r = r + 1;
    }
    else{
        printf("feio");
    }
    
    }
    }
}   

int main(){

int h = PerguntaNum(h);
char PalavraChave[h];
char w;
char PalavraPlayer[h];
char PalavraOculta[h];
char under = '_';
char guess;
char decisao;
int result = strcmp(PalavraChave, PalavraPlayer);
int cont = 0;


printf("Qual a sua Palavra?\n");
scanf("%s", &PalavraChave);

for (int i = 0; i <= h - 1; i++)
{
    PalavraOculta[i] = under;
}

MenuInicial(h, PalavraChave, PalavraPlayer, PalavraOculta, guess, decisao, result, cont);


}