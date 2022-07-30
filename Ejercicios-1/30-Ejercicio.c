/*
Hacer una función que invocada como expo(x,n) devuelva el valor de x a la n,
donde x es un número real y n entero (puede ser negativo). Resolverla con
multiplicaciones sucesivas.
*/

#include<stdio.h>

long expo(int base,int exp){
    long res = 1;

    for (int i=0;i<exp;i++){
        res *=base;
    }

    return res;
}

int main(){
    int base,exp;

    puts("Indique la base: ");
    fflush(stdout);
    scanf("%i",&base);

    puts("Indique el exponente: ");
    fflush(stdout);
    scanf("%i",&exp);

    printf("El resultado de hacer %i^%i es: %ld",base,exp,expo(base,exp));
    return 0;
}