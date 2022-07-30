/*
Dados dos vectores A y B, de N elementos cada uno, se desean calcular:
    a. el vector suma.
    b. el producto escalar. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int *cargar_vector(int);
int * sumar_vectores(int *,int *,int);
int producto_vectores(int *,int*,int);
void mostrar_vector(int *,int);

int main(void){
    srand(time(NULL));
    int num,*vector_1 = NULL,*vector_2 = NULL,*vector_suma = NULL;

    puts("Ingrese la cantidad de elementos de los vectores");
    fflush(stdout);
    scanf("%d",&num);
    vector_1 = cargar_vector(num);
    vector_2 = cargar_vector(num);
    mostrar_vector(vector_1,num);
    mostrar_vector(vector_2,num);
    vector_suma = sumar_vectores(vector_1,vector_2,num);
    mostrar_vector(vector_suma,num);
    printf("\nEl producto de los vectores es: %i",producto_vectores(vector_1,vector_2,num));
    free(vector_1);
    free(vector_2);
    free(vector_suma);
    return 0;
}

int *cargar_vector(int num){
    int *ptr_vector = (int *) malloc(num*sizeof(int));
    for (int i=0;i<num;i++)
        ptr_vector[i] = rand() % 20;
    return ptr_vector;
}

void mostrar_vector(int *vector,int cant){
    printf("\n[ ");
    for (int i = 0;i<cant;i++)
        printf("%i ",vector[i]);
    printf("]\n");
}

int producto_vectores(int *A,int *B,int cant){
    int producto = 0;
    for (int i=0;i<cant;i++)
        producto += A[i] * B[i];
    return producto;
}

int * sumar_vectores(int *A,int *B,int cant){
    puts("\nVECTOR SUMA");
    int *vector = malloc(cant*sizeof(int));
    for (int i=0;i<cant;i++)
        vector[i] = A[i] + B[i];
    return vector;
}