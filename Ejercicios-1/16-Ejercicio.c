/*
Escribir un algoritmo que determine si un número N (entero), que ingresa un
usuario, es divisible por M.
*/

#include<stdio.h>

int main(){

    int M = 12,N;

    puts("Igrese un numero: ");
    fflush(stdout);
    scanf("%i",&N);

    N % M == 0 ? printf("El numero ingresdo es divisible por %i",M) : printf("El numero ingresdo NO es divisible por %i",M);

    return 0;
}