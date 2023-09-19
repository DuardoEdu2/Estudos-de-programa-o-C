#include <stdio.h>
#include <string.h>

int main(){

char name[25]; //bytes
int age;

printf("\nWhat is your name?");
//scanf("%s", &name);
//scanf deleta qualquer dado que esteja após um espaço em branco então se o usuario
//for colocar um sobrenome usaremos o fgets
fgets(name, 25, stdin);
//o fgets automaticamente aplica o \n quando executado se voce quiser tirar esse processo
//bast edita-lo com a biblioteca sting.h:
name[strlen(name)-1] = '\0';

printf("How ould are you?");
//scanf, escaneia o que o usuario digita e armazena esse valor em uma variavel para usar depois
scanf("%d", &age);

printf("hello, you are %s and you are %d old", name, age);

return 0;

}