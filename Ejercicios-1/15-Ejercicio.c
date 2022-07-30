/*
Escribir un algoritmo que determine si un número entero, que ingresa un
usuario, es par.
*/

#include<stdio.h>

int main(){

    int num;

    puts("Ingrese un numero: ");
    fflush(stdout);
    scanf("%d",&num);

    num % 2 == 0 ? puts("Es par"): puts("Es impar");
    
    return 0;
}