#include <stdio.h>
#include <stdbool.h>


int main (){

    //logical operators is "E" and "OU" operators 
    //&& (AND) need to 2 or more values to be true 
    //|| (OR) at least one need to be true
    //! (NOT) it need to be DIFERRENT to be true value
    //bool is for checking binary values 1 or 0 true o false

    //logical operator: || (OR)

    bool sunny = true;

    if(!sunny){
        printf("o tempo ta bom pra jogar uma bolinha");
    }
    else{
        printf("o tempo ta ruim pra jogar bola");
    }


/*
float temp = 30;
    bool sunny = true;

    if(temp >= 0 || temp <=30){
        printf("o tempo ta bom pra jogar uma bolinha");
    }
    else{
        printf("o tempo ta ruim pra jogar bola");
    }
*/



/*

logical operator: && (AND)

float temp = 30;
    bool sunny = true;

    if(temp >= 0 && temp <=30 && sunny){
        printf("o tempo ta bom pra jogar uma bolinha");
    }
    else{
        printf("o tempo ta ruim pra jogar bola");
    }
*/




    return 0;
}