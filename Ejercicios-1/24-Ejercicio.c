/*
Leer un valor N y, luego, N números enteros. Se pide imprimir el mayor, el menor
y las veces que aparece cada uno.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int random,numero,min,max,cant_min,cant_max;

    srand(time(NULL));
    puts("Ingrese un numero entero entre 0 y 100: ");
    fflush(stdout);
    scanf("%i",&numero);
    
    while (numero < 0 || numero > 100){
        puts("El numero debe estar entre 0 y 100");
        puts("Ingrese otro numero: ");
        fflush(stdout);
        scanf("%i",&numero);
    }

    min = numero;
    max = numero;
    cant_max = 1;
    cant_min = 1;

    for (int i = 0; i<numero;i++){
   
    random = rand() %100;
    printf("%i\n",random);
    if (random <min){
        min = random;
        cant_max = 1;
    }
    else if (random > max){
        max = random;
        cant_max =1;    
    }
    else if (random == min){
        cant_min++;
    }
    else if (random == max){
        cant_min++;
    }
    }

    printf("El numero mayor ingresado es %i, y aparece %i veces\n",max,cant_max);
    printf("El numero menor ingresado es %i, y aparece  %i veces\n",min,cant_min);
    return 0;
}