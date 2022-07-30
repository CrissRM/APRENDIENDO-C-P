/*
Leer una serie de números enteros, terminando la serie con un cero. Imprimir
los datos a medida que se los ingresa junto con la suma parcial de los mismos.
*/
#include<stdio.h>

int main(){

    int numero,suma = 0;

    while (numero != 0){
        puts("Ingrese un numero: ");
        fflush(stdout);
        scanf("%i",&numero);
        suma += numero;
        printf("La suma actual es los numeros ingresados es: %d\n",suma);
    }
    return 0;
}