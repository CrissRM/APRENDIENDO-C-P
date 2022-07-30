/*
Determine lo que ocurre al tratar de copiar, strcpy(s1,s2), concatenar strcat(s1,s2) o comparar stccmp(s1,s2), las cadenas s1 y s2 definidas como:
    char *s1 = "Maria"
    char *s2 = "Ana"
*/

#include<stdio.h>
#include<string.h>

int main(){

    char *s1 = "Maria";
    char *s2 = "Ana";

    // strcpy(s1,s2);
    //strcmp(s1,s2)

    printf("La comparacion resulta en --> %i",strcmp(s1,s2));
    

    return 0;
}