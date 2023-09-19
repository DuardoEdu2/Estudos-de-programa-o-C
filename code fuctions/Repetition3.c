#include <stdio.h>
#include <string.h>

int main(){

//nested loop == a loop inside another loop

int rows;
int columns;
char symbol;

printf("\nEnter number of rows: ");
scanf("%d", &rows);

printf("Enter number of collumns: ");
scanf("%d", &columns);

printf("Enter a symbol: ");
scanf(" %c", &symbol);

for (int i = 1; i <= rows; i++)
{
    /* code */
    
        for (int g = 1; g <= columns; g++)
        {
            /* code */
                            
                printf("%c", symbol);
        }
    printf("\n");
}


return 0;

}