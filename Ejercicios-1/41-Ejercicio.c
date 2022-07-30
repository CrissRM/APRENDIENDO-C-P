/*
Dado un texto terminado en “.” averiguar qué cantidad de letras tiene la palabra
más larga.
*/
#include<stdio.h>
#include<string.h>

int main(){
    int cant_letras=0,aux=0;
    char texto[] = "Dado un texto terminado en punto averiguar que cantidad de letras tiene la palabra mas larga.";
    int tam = strlen(texto);

    for (int i=0;i<tam;i++){
        if (texto[i] == 32){
            if (cant_letras>=aux)
                aux = cant_letras;
            cant_letras = 0;
        }
        else if (texto[i] == 46)
            i = tam;
        else
            cant_letras++;
    }

    printf("La palabra mas larga tiene %i letras",aux);

    return 0;
}