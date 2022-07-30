/*
Leer un número N y calcular su factorial.
*/
#include<stdio.h>

int main(){

    int numero;
    long factorial = 1;

    puts("Ingrese un numero entero: ");
    fflush(stdout);
    scanf("%d",&numero);

    for (int i =1;i<=numero;i++){
        factorial *=i;
    }

    printf("El factorial de %d es %ld",numero,factorial);

    return 0;
}