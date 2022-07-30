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
    int num_1,num_2;
    printf("Ingrese el primer numero: ");
    scanf("%i",&num_1);
    printf("Ingrese el segundo numero: ");
    scanf("%i",&num_2);

    printf("La suma de %i y %i es: %i\n",num_1,num_2,num_1+num_2);
    printf("La resta de %i y %i es: %i\n",num_1,num_2,num_1-num_2);
    printf("La multiplicacion de %i y %i es: %i\n",num_1,num_2,num_1*num_2);
    printf("La division entera de %i y %i es: %i\n",num_1,num_2,num_1/num_2);
    printf("La division real de %i y %i es: %f\n",num_1,num_2,(float) num_1/num_2);
    return 0;
}