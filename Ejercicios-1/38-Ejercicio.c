/*
Contar la cantidad de palabras, separadas por uno o más espacios, de un
telegrama que termina en punto. No utilizar funciones de string salvo la que
indica la longitud.
*/

#include<stdio.h>
#include<string.h>

int main(){
    int cant_palabras = 1,i = 0;

    char texto[] = "Contar la cantidad de palabras, separadas por uno o más espacios, de un telegrama que termina en punto. No utilizar funciones de string salvo la que indica la longitud.";
    
    if (strlen(texto) == 0)
        puts("Cantidad de palabras: 0");
    else{
        while ((i< strlen(texto)) && texto[i] !=46){
            if (texto[i] == 32 && texto[i+1] !=32)
                cant_palabras++;
            i++;
        }

        printf("Cantidad de palabras: %i",cant_palabras);
    }
    return 0;
}