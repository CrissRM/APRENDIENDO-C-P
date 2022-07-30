/*
Leer dos números reales e imprimir el mayor de ellos.
*/

#include<stdio.h>

int main(){

    float num_a,num_b;

    puts("Ingrese dos numeros, separados por un espacio: ");
    fflush(stdout);
    scanf("%f %f",&num_a,&num_b);

    (num_a<=num_b) ? puts("El segundo numero es mayor") : puts("El primer numero es mayor");

    return 0;
}