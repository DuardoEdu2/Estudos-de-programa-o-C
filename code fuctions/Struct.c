#include <stdio.h>
#include <string.h>


struct Player
{

    char name[12];
    int score;


};


int main(){

    //struct = é uma coleção de Related Members ("Variaveis")
    //É bem parecido com classes mas não possui metodos.
    //Parece bastente tambem com os objects do unity (Similar a c#YIPEEE)


    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "EduGoiaba");
    player1.score = 4;

    strcpy(player2.name, "Samuel");
    player2.score = 3;

    printf("--------------Player-1-----------------------");
    printf("Name: %s\n", player1.name);
    printf("Score: %d points\n", player1.score);
    printf("--------------Player-2-----------------------");
    printf("Name: %s\n", player2.name);
    printf("Score: %d points\n", player2.score);



}