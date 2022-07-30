/*Escribir un algoritmo que determine si una matriz cuadrada ingresada es la matriz identidad. Optimizar el código. */

#include<stdio.h>
#include<stdlib.h>
#define DIM 3

int main(void){
    int M[DIM][DIM];
    for (int i=0;i<DIM;i++)
        for (int j=0;j<DIM;j++){
            printf("Ingrese el elemento (%d,%d): ",i,j);
            fflush(stdout);
            scanf("%d",&M[i][j]);
        }
    system("clear");
    for (int i=0;i<DIM;i++){
        for (int j=0;j<DIM;j++)
            printf("%d ",M[i][j]);
        printf("\n");
    }

    int i=0;
    int j = 0;
    int ciclar =1;
    while (i<DIM && ciclar){
        while (j<DIM && ciclar){
            if ((i==j && M[i][j] !=1) || (i!=j && M[i][j] != 0))
                ciclar = 0;
            j++;
        }
        i++;
        j = 0;
    }
    
    (!ciclar) ? puts("Matriz no es la identidad") : puts("Matriz identidad");
}