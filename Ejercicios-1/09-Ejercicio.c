/*
Pedir al usuario que ingrese dos números por teclado e imprimir
- La suma de ambos
- La resta (el primero menos el segundo)
- La multiplicación
- La división entera (suponer que el segundo número no es cero).
- La división con decimales.
*/

#include<stdio.h>

int main(){
    int num_a,num_b;

    puts("Ingrese el primer numero: ");
    fflush(stdout);
    scanf("%i",&num_a);

    puts("Ingrese el segundo numero: ");
    fflush(stdout);
    scanf("%i",&num_b);

    printf("La suma del numero %i y %i es: %i+%i = %i\n",num_a,num_b,num_a,num_b,num_a+num_b);

    printf("La resta del numero %i y %i es: %i-%i = %i\n",num_a,num_b,num_a,num_b,num_a-num_b);

    printf("El producto de los numeros %i y %i es: %i*%i = %i\n",num_a,num_b,num_a,num_b,num_a*num_b);

    printf("La division entera de los numeros %i y %i es: %i/%i = %i\n",num_a,num_b,num_a,num_b,num_a/num_b);

    printf("La division decimal de los numeros %i y %i es: %i/%i = %f\n",num_a,num_b,num_a,num_b,(float)num_a/num_b);
    
    return 0;
}