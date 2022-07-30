/*
Leer la base y la altura de un rectángulo, calcular el perímetro y la superficie.
*/

#include<stdio.h>

int main(){

    float base,altura,perimetro,area;

    puts("Ingrese la base del rectangulo: ");
    fflush(stdout);
    scanf("%f",&base);

    puts("Ingrese la altura del rectangulo: ");
    fflush(stdout);
    scanf("%f",&altura);

    perimetro = (base*2) + (altura*2);
    area = base*altura;

    printf("El perimetro del rectangulo es: %.2f\n",perimetro);
    printf("El area del rectangulo es: %.2f\n",area);

    return 0;
}