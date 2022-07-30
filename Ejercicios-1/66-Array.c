/*
Escribir una función que reciba una lista y un valor y devuelva verdadero (True) si el valor está en la lista, falso (False) en caso contrario
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

int *cargar_vector(int);
bool buscar_valor(int*,int);

int main(void){
    srand(time(NULL));
    int num;
    int *vector;
    puts("Indique la cantidad de elementos en el vector: ");
    fflush(stdout);
    scanf("%i",&num);
    vector = cargar_vector(num);
    buscar_valor(vector,num) ? puts("True") : puts("False");
    free(vector);
    return 0;
}

int *cargar_vector(int num){
    int *vector = (int*) malloc(num*sizeof(int));
    for (int i=0;i<num;i++)
        *(vector+i) = rand() % 100;
    return vector;
}

bool buscar_valor(int*vector,int cant){
    bool res = true;
    int i = 0;
    int valor;
    puts("Ingrese el entero a buscar: ");
    fflush(stdout);
    scanf("%i",&valor);

    while ((i<cant) && (vector[i] != valor))
        i++;
    
    (i == cant) ? (res = false) : (res = true);
    return res;   
}