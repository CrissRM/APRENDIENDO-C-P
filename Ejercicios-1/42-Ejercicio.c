/*
Leer dos letras de teclado y luego un texto terminado en “.”. Se pide determinar la cantidad de veces que la primera letra precede a la segunda en el texto. No utilizar funciones de string salvo la que indica la longitud.
*/

#include<stdio.h>
#include<string.h>

int main(){

    int letra_1 = 0,letra_2 = 0;
    int cant=0;
    char texto[] = "Leer dos letras de teclado y luego un texto terminado en punto,se pide determinar la cantidad de veces que la primera letra precede inmediatamente a la segunda en el texto. No utilizar funciones de string salvo la que indica la longitud.";
    
    int tam = strlen(texto);

    
    puts("Indique dos letras. A continuacion, se especificara la cantidad de veces que la primera precede a la segunda de forma inmediata");
    puts("Indique la primera letra: ");
    fflush(stdout);
    scanf("%s",&letra_1);
    puts("Indique la segunda letra: ");
    fflush(stdout);
    scanf("%s",&letra_2);
    
    for (int i=0;i<tam-1;i++)
        if (texto[i] == letra_1 && texto[i+1] == letra_2)
            cant++;

    printf("\nLa cantidad de veces que %c, precede a %c es %i",letra_1,letra_2,cant);


    return 0;
}