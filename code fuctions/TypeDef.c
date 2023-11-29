#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//typedef char user[25];

typedef struct
{
    char name[25];
    char password[25];
    int id;
} User;


int main(){

// TypeDef = a uma palavra reservada que da um apelido para alguma datatype existente


    User user1 = {"Edu", "password", 123456789};
    User user2 = {"Samuel", "password2", 12938612};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);

    return 0;

}