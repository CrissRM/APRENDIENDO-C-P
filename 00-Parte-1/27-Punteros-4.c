#include<stdio.h>

int main(void){

    int numeros[10] = {10,20,30,40,50,60,70,80,90,100};
    int *p_numeros = numeros;

    puts("Forma 1: Accediendo por indice en arrray");
    for (int i=0;i<10;i++)
        printf("numeros[%i] = %i\n",i,numeros[i]);

    puts("Forma 2: Accediendo por indice en puntero");
    for (int i=0;i<10;i++)
        printf("numeros[%i] = %i\n",i,p_numeros[i]);
    
    puts("Forma 3: Accediendo por nombre de array");
    for (int i=0;i<10;i++)
        printf("numeros[%i] = %i\n",i,*(numeros+i));

    puts("Forma 4: Accediendo por nombre de puntero");
    for (int i=0;i<10;i++)
        printf("numeros[%i] = %i\n",i,*(p_numeros+i));

    return 0;
}

// *(p_numeros+i)