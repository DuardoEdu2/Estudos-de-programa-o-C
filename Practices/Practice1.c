#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;
    printf("\na temperatura é (F) ou (C)?");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("\na temperatura esta em C");
        printf("\ndigite a temperatura: ");
        scanf("%f", &temp);
        temp = ((temp * 9 / 5)) + 32;
        printf("The temp in farenheit is: %.1f", temp);
    }
    else if(unit == 'F'){
        printf("\na temperatura esta em F");
        printf("\ndigite a temperatura: ");
        scanf("%f", &temp);
        temp = (5 * ((temp - 32) / 9));
        printf("The temp in Celsius is: %.1f", temp);
    }
    else{
        printf("digite (F) ou (C)");
    }

    return 0;

}