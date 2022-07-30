#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int *crear_vector(int);
void mostrar_vector(int *,int);
void ordenar_quick(int*,int,int);
void merge(int*,int,int,int);

int main(){
    srand(time(NULL));
    int num,*vector;
    puts("Ingrese la cantidad de elementos en el vector: ");
    fflush(stdout);
    scanf("%d",&num);
    vector = crear_vector(num);
    mostrar_vector(vector,num);
    ordenar_quick(vector,0,num-1);
    mostrar_vector(vector,num);
    free(vector);
    
    return 0;
}

int *crear_vector(int max){
    int *vector = malloc(max*sizeof(int));
    for (int i = 0;i<max;i++)
        *(vector+i) = rand() % 100;
    
    return vector;
}

void mostrar_vector(int *vector,int max){
    printf("\n[ ");
    for (int i=0;i<max;i++)
        printf("%d ",*(vector+i));
    printf("]\n");
}

void  ordenar_quick(int*vector,int inicio,int fin){
    if (inicio<fin){
    int pivote = vector[inicio];
    int index_izq = inicio, index_der = fin;

    while (index_izq < index_der){
        while ((index_izq < index_der) && (vector[index_der] > pivote))
            index_der--;

        if (index_izq < index_der){
            vector[index_izq] = vector[index_der];
            index_izq++;
        }

        while ((index_izq < index_der) && (vector[index_izq] < pivote))
            index_izq++;
        
        if (index_izq<index_der){
            vector[index_der] = vector[index_izq];
            index_der--;
        }
        
    }

    vector[index_der] = pivote;
    
    
    ordenar_quick(vector,inicio,index_der-1);
    ordenar_quick(vector,index_der+1,fin);

    }





}

