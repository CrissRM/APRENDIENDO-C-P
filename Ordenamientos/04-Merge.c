#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int *crear_vector(int);
void mostrar_vector(int *,int);
void ordenar_merge(int*,int,int);
void merge(int*,int,int,int);

int main(){
    srand(time(NULL));
    int num,*vector;
    puts("Ingrese la cantidad de elementos en el vector: ");
    fflush(stdout);
    scanf("%d",&num);
    vector = crear_vector(num);
    mostrar_vector(vector,num);
    ordenar_merge(vector,0,num);
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

void  ordenar_merge(int*vector,int inicio,int fin){
    if (inicio<fin) {
        int medio = (inicio+fin)/2;
        ordenar_merge(vector,inicio,medio);
        ordenar_merge(vector,medio+1,fin);
        merge(vector,inicio,medio,fin);

    }
}

void merge(int *vector, int inicio, int medio, int fin){
    int index_izq = 0, index_der = 0;
    int long_izq = (medio - inicio) + 1;
    int long_der = (fin - medio);

    
    int izquierda[long_izq];
    int derecha[long_der];
    
    // Copia de datos del arreglo en los subarreglos izquierda y derecha
    for (int i = 0; i < long_izq; i++)
        izquierda[i] = vector[inicio+i];

    for (int i = 0; i < long_der; i++)
        derecha[i] = vector[medio+1+i];
    
    // Fusion de datos respetando el valor minimos entre dos arreglos
    
    for (int i = inicio;i<=fin;i++){
        if (index_izq == long_izq){
            vector[i] = derecha[index_der];
            index_der++;
        }
        else if (index_der == long_der){
            vector[i] = izquierda[index_izq];
            index_izq++;
        }
        else{
            if (izquierda[index_izq] <= derecha[index_der]){
                vector[i] = izquierda[index_izq];
                index_izq++;
            }
            else{
                vector[i] = derecha[index_der];
                index_der++;
            }
        }
    }    
        
}
