/*
Escribir un algoritmo que halle una matriz C como suma de dos matrices A y B. La dimensión de las matrices de M × N se lee como dato (suponer un MAX para fila y columna). 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int **crear_matriz(int);
void mostrar_matriz(int **,int);
int **sumar_matrices(int**,int**,int);
void liberar_memoria(int**,int);
int main(void){
    srand(time(NULL));
    int max;
    printf("Indique la dimension de la matriz cuadrada: ");
    fflush(stdout);
    scanf("%d",&max);
    int **A = crear_matriz(max);
    int **B = crear_matriz(max);
    mostrar_matriz(A,max);
    mostrar_matriz(B,max);
    int **C = sumar_matrices(A,B,max);
    mostrar_matriz(C,max);
    liberar_memoria(A,max);
    liberar_memoria(B,max);
    liberar_memoria(C,max);
    
    return 0;
}

int **crear_matriz(int max){
    int **Matriz = malloc(max*sizeof(int*));
    for (int i=0;i<max;i++)
        Matriz[i] = malloc(max*sizeof(int));
    for (int i=0;i<max;i++)
        for (int j=0;j<max;j++)
            Matriz[i][j] = rand() % 10;
    return Matriz;
}

void mostrar_matriz(int **Matriz,int max){
    puts("\nMATRIZ: ");
    for (int i=0;i<max;i++){
        for (int j=0;j<max;j++)
            printf("%02d ",Matriz[i][j]);
        printf("\n");
    }
            
}

void liberar_memoria(int **M,int max){
    for (int i=0;i<max;i++)
        free(M[i]);
    free(M);
}

int **sumar_matrices(int **A,int **B,int max){
    int **C = crear_matriz(max);
    for (int i=0;i<max;i++)
        for (int j=0;j<max;j++)
            C[i][j] = A[i][j] + B[i][j];
    return C;
}