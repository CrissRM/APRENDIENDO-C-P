/*
Leer dos números y, luego, una opción (puede ser suma, resta, multiplicación o
división), según la opción elegida realizar el cálculo.
*/

#include<stdio.h>

int main(){

    int num_a,num_b,opcion;
    

    puts("Ingrese el primer numero: ");
    fflush(stdout);
    scanf("%i",&num_a);

    puts("Ingrese el segundo numero: ");
    fflush(stdout);
    scanf("%i",&num_b);

    puts("Ingrese una opcion:");
    puts("S o s ---> Sumar");
    puts("M o m ---> Multiplicar");
    puts("R o r ---> Restar");
    puts("D o d ---> Restar");
    fflush(stdout);
    scanf("%s",&opcion);

    switch (opcion)
    {
    case 115:
    case 83:
        printf("La suma --> %i + %i = %i",num_a,num_b,num_a+num_b);
        break;
    case 114:
    case 82:
        printf("La resta --> %i - %i = %i",num_a,num_b,num_a-num_b);
        break;
    case 109:
    case 77:
        printf("El producto --> %i * %i = %i",num_a,num_b,num_a*num_b);
        break;
    case 100:
    case 68:
        printf("La division entera --> %i / %i = %i\n",num_a,num_b,num_a/num_b);
        printf("La division decimal --> %i / %i = %.2f\n",num_a,num_b,(float)num_a/num_b);
        break;
    default:
        printf("'%c' No es una opcion valida",opcion);
    }
    
    return 0;
}