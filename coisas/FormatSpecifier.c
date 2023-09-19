#include <stdio.h>

int main(){

float item1 = 34.99;
float item2 = 23.50;
float item3 = 42.85;

//o .2 depois da porcentagem indica quantos numero depois da virgula deverão ser mostrados
//sem ele o numero seria acompanhado de diversos zeros
//esse format specifier é chamdo de decimal precision ou precisão decimal
printf("item 1: $%8.2f\n", item1);
printf("item 2: $%-8.2f\n", item2);
printf("item 3: $%f\n", item3);
//com o format specifier %x onde x é o numero de casas que voce ira quere alinhar sua variave
// ou seja espaços em branco, eles normalmente são espaços no lado esquerdo mas se voce quiser
// use %-x para fazer eles ficarem no direito isso seria correspondente minimum fild width e left align


}

/*
Format Specifier % = defines and formats a type of data to be displayed

%c = char
%s = char[]/string
%f = float
%lf = double
%d = integer

%.1 = decimal precision
%1 = minimum fild width
%- = left align

*/
