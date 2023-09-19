#include <stdio.h>
#include <string.h>

int main(){

//while loop = it can repeat s code section possibly unilimeted time.
//WHILE some codition remains True
// it can be not executed at all

char name[25];

printf("\nWhats your name?: ");
fgets(name, 25, stdin);
name[strlen(name) - 1] = '\0';

while(strlen(name) == 0)
{
    printf("you did not enter your name");
    printf("\nWhats your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';
}

printf("Hello %s", name);

return 0;

}