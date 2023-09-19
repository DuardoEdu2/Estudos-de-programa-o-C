#include <stdio.h>

void Parabens(char[], int); // <- function prototype

int main(){

    /*
    function prototype
    
    O QUE É?
    It always comes before main (as good practice)
    o que ele faz é basicamente obriga ao codigo dar erro caso os argumentos de uma função
    estiverem incompletos (ajuda bastante a prevenir bugs e erros)

    IMPORTANT NOTES
    isso acontece por causa que os compiladores C não revisam matching parameters, permitindo
    que paramentros inconpletos passem pelo codigo
    paramentos incompletos causam reações inesperadas ex: int dando numeros aleatorios
    the function prototype causes the compiler to flag an error if arguments are missing
    
    */

    char name[] = "Edu";
    int age = 21;

    Parabens(name, age);

    return 0;

}

void Parabens(char name[], int age)
{
printf("parabens %s\n", name);
printf("congrats on doing %d years", age);
}