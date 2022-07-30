#include<stdio.h>

int main(){

    int a = 25,b=19;
    char cadena[100];

    printf("a = %d b = %d",a,b);
    sprintf(cadena,"a = %d b = %d",a,b);
    printf("\n%s",cadena);

    return 0;
}