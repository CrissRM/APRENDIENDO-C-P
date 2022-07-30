/*
Leer un número por teclado e imprimirlo en pantalla con el siguiente cartel:
“Número ingresado = ” número.
*/

#include<stdio.h>

int main(){
    int numero;

    printf("Ingrese un numero entero: ");
    scanf("%i",&numero);

    printf("Numero ingresdo = %i",numero);
    return 0;
}