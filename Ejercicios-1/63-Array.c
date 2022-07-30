/*
Desarrollar una función que devuelva en un vector (una lista) los números primos entre 2 y 200.
*/

#include <stdlib.h>
#include<stdio.h>
#include <stdbool.h>

#define NUM_MIN 400
#define NUM_MAX 2000

int *lista_primos(int *);
void mostrar_vector(int *,int);
bool es_primo(int);

int main(void){

    int *vector = NULL;
    int cant_elementos=0;
    vector = lista_primos(&cant_elementos);
    mostrar_vector(vector,cant_elementos);
    free(vector);
    


    return 0;
}

bool es_primo(int num){
    int divisores = 2,divisor = 2;
    bool primo = true;
    if (num == 1)
        primo = false;
    else
        while ((divisor <num) && (divisores == 2)){
            if (num%divisor == 0){
                divisores++;
                primo = false;
            }
            divisor++;
        }

    return primo;
}

void mostrar_vector(int *vector,int cant){
    printf("Los numeros primos entre %i y %i son: \n",NUM_MIN,NUM_MAX);
    for (int i = 0; i<cant;i++){
        printf("%d ",vector[i]);
        if ((i %10==0) && (i>0))
            printf("\n");
    }
}

int *lista_primos(int *elementos){
    int *ptr_primo = NULL;
    int index = 1;
    for (int i=NUM_MIN;i<=NUM_MAX;i++){
        if (es_primo(i)){
            ptr_primo = (int*) realloc(ptr_primo,index*sizeof(int));
            if (ptr_primo == NULL){
                printf("No hay espacio suficiente");
                fflush(stdout);
                exit(-1);
            }
            ptr_primo[index-1] = i;
            index++;
        }
    }
    *elementos = index-1;
    return ptr_primo;
}