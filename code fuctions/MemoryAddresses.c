#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{

    //memory = uma sequencia de bytes em uma RAM (Compare com uma rua)
    //memory block = Uma unidade singular (byte) na memoria, esse bloco possui algum valor (compare com uma pessoa(Value) dentro de uma casa(block))
    //memory address = o endereço de onde o memory block esta localizado na memoria(o endereço da casa na rua)

    char a;
    double b[3];

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));

    printf("%p\n", &a);
    printf("%p\n", &b);


}