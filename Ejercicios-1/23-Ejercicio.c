/*
Dada una serie de números enteros, determinar el valor máximo, mínimo y las
posiciones en que éstos se encontraban en la serie. El programa deberá ir
preguntando si hay más números para ingresar.
*/
#include<stdio.h>

int main(){

    int numero,min,max,pos_max,pos_min,i = 1;

    puts("Ingrese un numero distinto de cero: ");
    fflush(stdout);
    scanf("%d",&numero);
    min = numero;
    max = numero;
    pos_max = 1;
    pos_min = 1;

    while (numero != 0){
        
        puts("Ingrese otro numero o cero (0) para finalizar: ");
        fflush(stdout);
        scanf("%d",&numero);
        if (numero !=0){
            i++;
            if (numero<= min){
                min = numero;
                pos_min = i;
            }
            else if (numero>min && numero>=max) {
                max = numero;
                pos_max = i;
            }
        }
    }

    printf("El numero mayor ingresado es %i, y fue el %i\n",max,pos_max);
    printf("El numero menor ingresado es %i, y fue el %i\n",min,pos_min);

    return 0;
}