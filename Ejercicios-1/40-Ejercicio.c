/*
Dado un texto terminado en “.” se pide determinar cuántas veces aparece determinada letra que se indica por teclado. Sin utilizar funciones de string, salvo len.
*/
#include<stdio.h>
#include<string.h>

int main(){
    int cant = 0,letra;
    char texto[] = "Dado un texto terminado en “.” se pide determinar cuántas veces aparece determinada letra que se indica por teclado. Sin utilizar funciones de string, salvo len.";

    puts("Indique la letra a buscar: ");
    fflush(stdout);
    scanf("%s",&letra);

    for (int i=0;i<strlen(texto);i++){
        if (texto[i] == letra)
            cant++;
    }

    printf("La cantidad de veces que aparece la letra '%c' es %i",letra,cant);
    return 0;
}