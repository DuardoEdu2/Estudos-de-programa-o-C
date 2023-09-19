#include <stdio.h>
#include <string.h>

int main(){

    char string1[] = "Edu";
    char string2[] = "Goiaba";

    //strlwr(string1);                  //make the string Lowercase;
    //strupr(string1);                  //make the string Uppercase; 
    //strcat(string1, string2);         //cocatena a string;
    //strncat(string1, string2, 1);     //cocatena o numero de letras definido no terceiro argumento do segundo no primeiro
    //strcpy(string1, string2);
    //strncpy(string1, string2, 1);

    //strset(string1, '?');               //sets all characeters of a string to a given character
    //strnset(string1, '?', 1);           //sets first n characeters of a string to a given character
    //strrev(string1);                    //vaz com que a string fique reversa

    //int result = strlen(string1);                     // it return the lenght of the string 
    //int result = strcmp(string1, string2);          //compare character of 2 strings if they are equal the function return 0 if they are diferrent the function return -1
    //int result = strncmp(string1, string2, 1);      // compare n characters
    //int result = strcmpi(string1, string1);         // string compare all (ignore case upper or lower)
    //int result = strncmpi(string1, string2, 1);     // string compare n characters (ignore case upper or lower)


    printf("%d\n", string1);

    /*

    int result = strcmp(string1, string2):

    printf("%d\n", result);

    if(result == 0){
        printf("These names are the same");
    }
    else{
        printf("thesse names are diferent");
    }

    return 0;
    */
}