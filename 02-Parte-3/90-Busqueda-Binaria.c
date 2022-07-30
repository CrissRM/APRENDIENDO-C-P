#include<stdio.h>

int busqueda_binaria(int *lista,int inicio,int fin,int elemento){
    int medio;
    if (inicio > fin)
        return -1;
    else{
        medio = (inicio+fin)/2;
        if (lista[medio] == elemento)
            return medio;
        if (lista[medio] < elemento)
            return busqueda_binaria(lista,medio+1,fin,elemento);
        else
            return busqueda_binaria(lista,inicio,medio-1,elemento);

    }
}

int main(){

    int lista[]={1,4,6,7,23,45,56,78,92,112,123};
    int num;
    puts("Ingrese el numero a buscar: ");
    fflush(stdout);
    scanf("%d",&num);
    printf("El elemento = %i esta en la posicion %i",num,busqueda_binaria(lista,0,11,num));
    


    return 0;
}