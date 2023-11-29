#include <stdio.h>
#include <string.h>
#include <math.h>

void sort(int num[], int size){

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (num[j] < num[j+1])
            {
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
            
        }
        
    }
    

}

void printArray(int num[], int size){

    for (int i = 0; i < size; i++)
    {
        printf("%d, ", num[i]);
    }
    


}

int main(){

    int num[] = {9, 6, 4, 7, 8, 1, 2, 5, 3};
    int size = sizeof(num)/sizeof(num[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%d, ", num[i]);
    }
    
    printf("\n");

    sort(num, size);
    printArray(num, size);

}
