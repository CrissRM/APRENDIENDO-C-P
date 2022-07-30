#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int *crear_vector(int);
void mostrar_vector(int*,int);
int division_conquista(int *,int,int);

int main(void){
    srand(time(NULL));
    int num;
    puts("Ingrese la cantidad de elemenotos en el vector: ");
    fflush(stdout);
    scanf("%d",&num);
    int *vector = crear_vector(num);
    mostrar_vector(vector,num);
    printf("El maximo es: %d",division_conquista(vector,0,num-1));
    free(vector);
}

int *crear_vector(int cant){
    int *vector = (int*) malloc(cant*sizeof(int));

    for (int i=0;i<cant;i++)
        *(vector+i) = rand() % 100;

    return vector;
}

void mostrar_vector(int*vector,int cant){
    printf("\n[ ");
    for (int i=0;i<cant;i++)
        printf("%d ",*(vector+i));
    printf("]\n");
}

int division_conquista(int *vector,int inicio,int fin){
    int medio,izq,der;
    
    if (inicio == fin)
        return vector[inicio];
    medio = (inicio + fin)/2;

    izq = division_conquista(vector,inicio,medio);
    der = division_conquista(vector,medio+1,fin);
    return ((der) <(izq)) ? (izq) : (der);
}
