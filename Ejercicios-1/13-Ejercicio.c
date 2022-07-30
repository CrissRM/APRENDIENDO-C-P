/*
Leer un número real y decir si es mayor, menor o igual a cero.
*/

#include<stdio.h>

int main(){

    float num;

    puts("Ingrese un numero: ");
    fflush(stdout);
    scanf("%f",&num);

    if (num > 0)
        puts("El numero es mayor a cero");
    else if (num<0)
        puts("El numero es menor a cero");
    else
        puts("El numero es cero");
    
    

    return 0;
}