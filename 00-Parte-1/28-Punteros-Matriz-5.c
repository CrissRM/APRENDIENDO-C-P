#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define FIL 6
#define COL 17

void mostrar_matriz(int fil,int col,int *p[]);

int main(void){
    srand(time(NULL));

    int matriz[FIL][COL];
    for (int i=0;i<FIL;i++)
        for (int j=0;j<COL;j++)
            matriz[i][j] = rand()%100;
    
    int *p[FIL];

    for (int i=0;i<FIL;i++)
        p[i] = &matriz[i][0];
        
    mostrar_matriz(FIL,COL,p);
    
    return 0;
}

void mostrar_matriz(int fil,int col,int *p[]){
    for (int i=0;i<fil;i++){
        for (int j=0;j<col;j++)
            printf("%02i ",*(p[i]+j));
        printf("\n");
    }
        
}


