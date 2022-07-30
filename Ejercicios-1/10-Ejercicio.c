/*
Dado el radio R de una esfera, calcular e imprimir su superficie y su volumen.
*/

#include<stdio.h>
#define PI 3.1416

int main(){
    float radio,area,volumen;

    puts("Ingrese el radio de la esfera: ");
    fflush(stdout);
    scanf("%f",&radio);

    area = 4 * PI * radio*radio;
    volumen = ((float)4/3) * PI * radio*radio*radio;

    printf("La esfra de radio %.2f tiene una area de %.2f\n",radio,area);
    printf("La esfra de radio %.2f tiene un volumen de %.2f\n",radio,volumen);

    return 0;
}