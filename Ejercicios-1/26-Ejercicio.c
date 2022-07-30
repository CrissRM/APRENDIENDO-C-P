/*
Leer A y B, enteros. Calcular C = A^B mediante multiplicaciones sucesivas e
imprimir el resultado. Tener en cuenta que son números enteros, por lo tanto
pueden tomar valores positivos, negativos o cero.
*/
#include<stdio.h>

int calcular_potencia(int A, int B){
    int C = 1;
    for (int i = 0;i<B;i++){
        C *=  A;
    }
    return C;
}

int main(){

    int A,B,aux;
    float C;

    puts("Ingrese la base: ");
    fflush(stdout);
    scanf("%i",&A);

    puts("Ingrese el exponente: ");
    fflush(stdout);
    scanf("%i",&B);

    if (B<0)
        C = (float) 1/calcular_potencia(A,-B);
    else if (B >0)
        C = calcular_potencia(A,B);
    else
        C = 1;
    
    printf("Dada la base = %i y el exponente = %i --> A^B = %.2f",A,B,C);

    
    return 0;
}