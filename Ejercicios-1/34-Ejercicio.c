/*
Realizar un algoritmo que lea una serie de números reales y verifique si están
ordenados en forma ascendente, descendente o si no están ordenados,
informando por pantalla.
*/

#include<stdio.h>
#include<stdbool.h>

bool ascendente(int lista[],int tam){
    bool res,es_ascendente = true;
    int i = 0;
    while ( i<tam && (lista[i] <= lista[i+1]))
        i++;
    
    if (i == tam)
        res =true;
    else
        res = false;
    
    return res;
}

bool descendente(int lista[],int tam){
    bool res,es_ascendente = true;
    int i = 0;
    while ( i<tam && (lista[i] >= lista[i+1]))
        i++;
    
    if (i == tam)
        res =true;
    else
        res = false;
    
    return res;
}

int main(){
    int tam,valor;
    puts("Indique el tamaño del arreglo: ");
    fflush(stdout);
    scanf("%d",&tam);

    int lista[tam];

    for (int i=0;i<tam;i++){
        printf("Ingrese el valor  %i\n",i+1);
        fflush(stdout);
        scanf("%d",&valor);
        lista[i] = valor;
    }

    if (ascendente(lista,tam))
        puts("Lista ordenada de forma ascendente");
    else if (descendente(lista,tam))
        puts("Lista ordenada de forma descendente");
    else
        puts("Lista no ordenada");


    return 0;
}