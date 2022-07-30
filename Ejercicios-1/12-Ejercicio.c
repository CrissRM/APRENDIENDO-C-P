/*
Leer dos números A y B e intercambiar el valor de sus variables.
*/

#include<stdio.h>

int main(){
    int num_a,num_b,aux;

    puts("Ingrese el primer numero");
    fflush(stdout);
    scanf("%i",&num_a);

    puts("Ingrese el segundo numero");
    fflush(stdout);
    scanf("%i",&num_b);

    printf("Antes del intercambio a = %i , b = %i\n",num_a,num_b);

    aux = num_a;
    num_a = num_b;
    num_b = aux;

    printf("Antes del intercambio a = %i , b = %i\n",num_a,num_b);
    return 0;
}