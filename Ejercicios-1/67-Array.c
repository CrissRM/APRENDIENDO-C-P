/*
Escribir una función que reciba una lista y un valor y devuelva la posición en que encuentra al valor en la lista, si el valor estuviera repetido devolver la primera aparición, si no estuviera devolver –1
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_ELEMENTOS 100

int *crear_vector(void);
void mostrar_vector(int *,int);
int buscar_indice(int *,int);

int main(void){

    srand(time(NULL));
    int *vector = crear_vector();
    mostrar_vector(vector,MAX_ELEMENTOS);
    printf("\nEl valor se encuentra en la posicion: %i",buscar_indice(vector,MAX_ELEMENTOS));
    return 0;
}

int *crear_vector(void){
    int *vector = (int *)malloc(MAX_ELEMENTOS*sizeof(int));
    for (int i=0;i<MAX_ELEMENTOS;i++)
        *(vector+i) = rand() % 100;
    return vector;
}

void mostrar_vector(int *vector,int max){
    printf("\n[ ");
    for (int i=0;i<MAX_ELEMENTOS;i++)
        printf("%i ",*(vector+i));
    printf("]\n");
}

int buscar_indice(int *vector,int cant){
    int index = -1;
    int i = 0;
    int valor;
    puts("Ingrese el entero a buscar");
    fflush(stdout);
    scanf("%i",&valor);
    fflush(stdin);
    while ((i<cant) && (vector[i] !=valor))
        i++;
    if (i != cant)
        index = i;
    return index;
}