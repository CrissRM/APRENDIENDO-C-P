/*
Escribir un programa en C que inicialice un arreglo bidimensional  y luego los puestre utilizando punteros
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define FIL 4
#define COL 3

void cargar_puntero(int fil,int col,int A[][col],int *p[]);
void cargar_matriz(int fil,int col,int *A[]);
void ver_matriz(int fil,int col,int *p[]);
void ver_matriz_v2(int fil,int col,int A[][col]);

int main(void){
    srand(time(NULL));

    int A[FIL][COL] = {0};
    int *p[FIL];
    cargar_puntero(FIL,COL,A,p);
    cargar_matriz(FIL,COL,p);
    ver_matriz(FIL,COL,p);
    ver_matriz_v2(FIL,COL,A);


    return 0;
}

void cargar_puntero(int fil,int col,int A[][col],int *p[]){
    for (int i=0;i<fil;i++)
        p[i] = &A[i][0];
}


void cargar_matriz(int fil,int col,int *p[]){
    for (int i=0;i<fil;i++)
        for (int j=0;j<col;j++)
            *(p[i]+j) = rand() % 10;
}

void ver_matriz(int fil,int col,int *p[]){
    printf("\n\nVERSION 1\n");
    for (int i=0;i<fil;i++){
        for (int j=0;j<col;j++)
            printf("%d ",*(p[i]+j));
        printf("\n");
    }
}

void ver_matriz_v2(int fil,int col,int A[][col]){
    printf("\n\nVERSION 2\n");
    for (int i=0;i<fil;i++){
        for (int j=0;j<col;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }
}