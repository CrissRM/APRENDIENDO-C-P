#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int *crear_vector(int);
void mostrar_vector(int *,int);
void ordenar_seleccion(int*,int);

int main(){
    srand(time(NULL));
    int num,*vector;
    puts("Ingrese la cantidad de elementos en el vector: ");
    fflush(stdout);
    scanf("%d",&num);
    vector = crear_vector(num);
    mostrar_vector(vector,num);
    ordenar_seleccion(vector,num);
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

void ordenar_seleccion(int*vector,int max){
    int aux,menor;
    for (int i=0;i<max;i++){
        menor = vector[i];
        for (int j=0;j<max-i;j++){
            if (vector[j] > vector[j+1]){
                aux = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = aux;
            }
        }
    }
        

}
