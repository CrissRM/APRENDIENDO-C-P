/*
Dada una serie de números enteros, imprimir los tres
mayores.
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    srand(time(NULL));
    
    int tam,aux;
    puts("Cuantos elementos quiere en la serie: ");
    fflush(stdout);
    scanf("%i",&tam);

    int lista[tam];
    

    for (int i = 0;i<tam;i++){
        lista[i] = rand() % 100;
    }
    
    printf("\n\n[");
    for (int i = 0;i<tam;i++){
        printf(" %i ",lista[i]);
        if (i !=tam-1)
            printf(",");

    }
    printf("]\n");

    for (int i = 0;i<tam;i++)
        for (int j = i+1;j<tam;j++)
            if (lista[i] > lista[j]){
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
    

    printf("\nLos tres mayores son: ");
    printf("  %i",lista[tam-1]);
    printf("  %i",lista[tam-2]);
    printf("  %i",lista[tam-3]);

    


    return 0;
}
