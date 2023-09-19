#include <stdio.h>


void Parabens(char name[], int age)
{
printf("parabens para você\n");
printf("parabens %s\n", name);
printf("congrats on doing %d years", age);
}



int main(){

    char name[] = "";
    int age;

    scanf("%s%d", &name, &age);
    Parabens(name, age);

    return 0;

}