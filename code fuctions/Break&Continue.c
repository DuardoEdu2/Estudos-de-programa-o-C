#include <stdio.h>
#include <string.h>

int main(){

    //continue = skip a section of the code inside of a loop
    //break = stop the loop entirely

    for (int i = 1; i <= 20; i++)
    {
        /* code */
        if(i == 13)
        {
            break;
        }
        printf("%d\n", i);
    }

    return 0;

}