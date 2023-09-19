#include <stdio.h>

int main(){

    //if, ifelse, else

    int age;
    char grade;


    //switch

    printf("Enter a letter grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Perfection");
        break;
    case 'B':
        printf("TU foi bem meu caro");
        break;
    case 'C':
        printf("C get Degrees baby");
        break;
    case 'D':
        printf("you DiD it at least");
        break;
    case 'E':
        printf("at least its not a F");
        break;
    case 'F':
        printf("you failed");
        break;
    default:
        printf("Please put something valid");
        break;
    }

}