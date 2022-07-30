/*Escribir un algoritmo que halle un vector cuyos elementos son la suma de los elementos de cada fila de una matriz previamente ingresada. */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int **cargar_matriz(int,int);
void mostrar_matriz(int **,int,int);
void liberar_memoria(int **,int);
void vector_suma_filas(int **,int,int);

int main(void){
    srand(time(NULL));
    int fil,col;
    puts("Ingrese el numero de filas y columnos separadas por un espacio: ");
    fflush(stdout);
    scanf("%d %d",&fil,&col);
    int **A = cargar_matriz(fil,col);
    mostrar_matriz(A,fil,col);
    vector_suma_filas(A,fil,col);
    liberar_memoria(A,fil);
}

int **cargar_matriz(int fil,int col){
    int **A = malloc(fil*sizeof(int*));
    if (A == NULL){
        puts("Memoria insuficiente");
        exit(-1);
    }
    for (int i=0;i<fil;i++){
        A[i] = malloc(col*sizeof(int));
        if (A[i] == NULL){
        puts("Memoria insuficiente");
        exit(-1);
    }
    }
    system("clear");
    for (int i=0;i<fil;i++){
        for (int j=0;j<col;j++){
            // printf("\nIngrese el elemento (%i,%i): ",i,j);
            // fflush(stdout);
            // scanf("%d",&A[i][j]);
            // fflush(stdin);
            A[i][j] = rand() % 100;
        }
    }
    return A;
}

void mostrar_matriz(int **Matriz,int fil,int col){
    system("clear");
    puts("MATRIZ: ");
    for (int i=0;i<fil;i++){
        for (int j=0;j<col;j++)
            printf("%02d ",Matriz[i][j]);
        printf("\n");
    }
            
}

void liberar_memoria(int **M,int fil){
    for (int i=0;i<fil;i++)
        free(M[i]);
    free(M);
}

void vector_suma_filas(int **M,int fil,int col){
    int vector[fil];
    for (int i=0;i<fil;i++){
        vector[i] = 0;
        for (int j=0;j<col;j++)
            vector[i] += M[i][j];
    }
    puts("\n");
    puts("VECTOR SUMA DE FILAS DE LA MATRIZ: ");
    printf("[ ");
    for (int k=0;k<fil;k++)
        printf("%d ",vector[k]);
    printf("]");
    fflush(stdout);
}