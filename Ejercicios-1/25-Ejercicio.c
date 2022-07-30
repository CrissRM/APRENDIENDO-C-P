/*
Leer A y B, enteros. Calcular C = A * B mediante sumas sucesivas e imprimir el
resultado.
*/

#include<stdio.h>

int main(){

    int A,B,C=0;

    puts("Ingrese un numero: ");
    fflush(stdout);
    scanf("%i",&A);

    puts("Ingrese otro numero: ");
    fflush(stdout);
    scanf("%i",&B);

    if (A<=B)
        if (A<0)
            for (int i = A;i<0; i++)
                C -= B;
        else
            for (int i = 0;i<A; i++)
                C += B;
    else
        if (B<0)
            for (int i = B;i<0; i++)
                C -= A;
        else
            for (int i = 0;i<B; i++)
                C += A;
    
    printf("El producto de A = %i y B = %i --> A*B = %i",A,B,C);
    return 0;
}



