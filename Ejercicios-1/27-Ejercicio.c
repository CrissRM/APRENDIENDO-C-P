/*
Escribir un algoritmo que indique si un número entero, ingresado por un usuario,
es primo.
*/

#include<stdio.h>

int main(){
    int num,cont = 2,div =2;

    puts("Ingrese un numero: ");
    fflush(stdout);

    scanf("%i",&num);
    
    if (num <= 1)
        puts("El numero no es primo");
    else if (num == 2)
        puts("El numero es primo");
    else{
        while (cont == 2 && div < num) {
            if (num % div == 0)
                cont++;
            div++;
        }

        if (cont == 2)
            puts("El numero es primo");
        else
            puts("El numero no es primo");
    }

    
    return 0;
}