#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef char array[25];

enum Day{Seg = 1, Ter = 2, Qua = 3, Qui = 4, Sex = 5, Sab = 6, Dom = 7};

int main(){

    //enum = É um tipo de nome definido pelo desenvolvedor para facilitar a leitura do codigo

    enum Day today = Seg;

    printf("%d\n", today); //Enum não são strings mas podem ser usados com int (integers)

    if (today == Sab || today == Dom)
    {
        printf("É FINAL DE SEMANAAAAAA");
    }
    else
    {
        printf("Tem que trabalhar");
    }

    return 0;
}
