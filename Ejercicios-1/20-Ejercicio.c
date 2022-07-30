/*
Imprimir por pantalla una lista de 20 números consecutivos, los cuales
comienzan con un número ingresado por teclado.
*/
#include<stdio.h>

int main(){

    int numero;

    puts("Ingrese un numero: ");
    fflush(stdout);

    scanf("%d",&numero);

    printf("Numeros consecutivos a %d\n",numero);
    for (int i=1;i<11;i++){
        printf("%d\n",numero+i);

    }

    return 0;
}