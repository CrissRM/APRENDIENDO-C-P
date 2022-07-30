/*
Para ller un dato ingresado, se usa:
  scanf(tipo,&variable)  ---> EJEMPLO: canf("%i",&edad)
*/

#include<stdio.h>

void main(){
  int valor_1;

  printf("Valor 1: ");
  scanf("%i",&valor_1);
  printf("El valor ingresado es: %i",valor_1);

  return;
}