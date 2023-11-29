#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef char user[25];

struct Student
{
    char name[25];
    float nota;
};



int main(){

    struct Student student1 = {"BobSponja", 10.0};
    struct Student student2 = {"PatrickEstrela", 2.5};
    struct Student student3 = {"LulaMolusco", 8.9};
    
    struct Student students[] = {student1, student2, student3};

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        /* code */
        printf("%-s\t", students[i].name);
        printf("%.2f\n", students[i].nota);
    }
    


    return 0;

}