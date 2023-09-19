#include <stdio.h>
#include <stdbool.h>

int main(){

    /*
    A linguagem C não é orientada a objetos então nao temos o tipo de dado string, o seja
    é nescessario guardar letra por letra em um array.
    */

    int a; //declaração
    a = 123; //inicialização
    int b = 1234; //declaração + inicialização

    int age = 21; //int = numero inteiro não decimal !{ %d }
    unsigned int num = 329402340; //doubles the range but removes negative numbers !{ %u }
    long long int numerao = 9000000000000000000; // uses 8 bytes of memory and has a range of (-9 quintillion to + 9 quintilions) !{ %lld } 
    unsigned long long int numeraoGrandaoaeMuitoGrandePraCarambolas = 18000000000000000000; //uses 8 bytes of memory and has a range of (0 to +18 quintillion) !{ %lldu } achei pouco
    bool TrueorFalse = true; //bool = verdadeiro ou falso !{ %d }
    float decimal = 2.4; //float = numero intiros e decimais !{ %f }
    char grade = 'A'; //char = uma unica letra !{ %c } ->
        /* o char pode armazenar um numero tambem, contanto que ele esteja entre -128 e 127
        a partir disso nós podemos printar o nume com %d ou a letra com %c sendo a letra a
        versão de char do decimal da tabela ascii
        */
    unsigned char g = 255; //o unsigned char basicamente dobra o range do char, enquanto o char tem o range de 127 o unsigned tem o range de entre 0 e 255
    char name[] = "Bro"; //array de letras !{ %s }

    printf("hello %s\n", name);
    printf("you are %d years old\n", age);
    printf("your average grade is %c\n", grade);
    printf("your gpa %f", decimal);


}


/*
BITAGEM:
char -> 1 byte
unsinged char -> 1 byte
char[x] -> x bytes an array of characters
float -> 4 bytes(32 bits of precision) 6 - 7 digits
double -> 8 bytes(64 bits of precision) 15 - 16 digits
bool -> 1 byte
short int -> 2 bytes
unsinged short int -> 2 bytes
int -> 4 bytes
unsigned int -> 4 bytes but i doubles the range but removes negative numbers
long long int -> 8 bytes
*/

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