/*Escribir un algoritmo que construya un vector con los valores mínimos de cada una de las filas de una matriz. */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_FIL 30
#define MAX_COL 30


float **crear_matriz(int *,int *);
void mostrar_matriz(float**,int,int);
void mostrar_minimos(float**,int,int);

int main(void){
    srand(time(NULL));
    int fil,col;
    float **M = crear_matriz(&fil,&col);
    mostrar_matriz(M,fil,col);
    mostrar_minimos(M,fil,col);


    return 0;
}

float **crear_matriz(int *num_fil,int *num_col){
    int fil,col;
    printf("\nIngrese la cantidad de filas: ");
    fflush(stdout);
    scanf("%d",&fil);
    while (fil < 0 || fil >MAX_FIL){
        printf("La cantidad de filas debe ser un numero entero positivo no mayor a %i\n",MAX_FIL);
        printf("Ingrese la cantidad de filas nuevamente: ");
        fflush(stdout);
        scanf("%d",&fil);
    }

    printf("\nIngrese la cantidad de columnas: ");
    fflush(stdout);
    scanf("%d",&col);
    while (col < 0 || col >MAX_COL){
        printf("La cantidad de columnas debe ser un numero entero positivo no mayor a %i\n",MAX_COL);
        printf("Ingrese la cantidad de columnas nuevamente: ");
        fflush(stdout);
        scanf("%d",&col);
    }

    *num_fil = fil;
    *num_col = col;

    float **M = (float **)malloc(fil*sizeof(float *));
    for (int i = 0;i<fil;i++)
        M[i] = malloc(col*sizeof(float));
    
    for (int i=0;i<fil;i++)
        for (int j=0;j<col;j++){
            M[i][j] = (float) rand() / RAND_MAX;
        }
    return M;
}

void mostrar_matriz(float**M,int fil,int col){
    system("clear");
    puts("MATRIZ: ");
    for (int i=0;i<fil;i++){
        for (int j=0;j<col;j++)
            printf("%.3f ",*(*(M+i)+j));
        printf("\n");
    }
}

void mostrar_minimos(float**M,int fil,int col){
    float *vector = calloc(fil,sizeof(float));
    for (int i=0;i<fil;i++)
        *(vector+i) = 1;
    
    for (int i=0;i<fil;i++)
        for (int j=0;j<col;j++)
            if (M[i][j] < vector[i])
                vector[i] = M[i][j];
    printf("\nVECTOR CON LOS MINIMOS DE CADA FILA:\n");
    printf("[ ");
    for (int i=0;i<fil;i++)
        printf("%.3f ",*(vector+i));
    printf("]");

    free(vector);

    for (int i=0;i<fil;i++)
        free(M[i]);
    free(M);
}


