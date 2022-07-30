/*
PUNTEROS
- Escribir una función que define dos enteros a y b, y un puntero a entero p. 

1) Inicializa el a en 5, b en 10. 
2) Sin nombrar a a ni a b, imprimir por pantalla sus valores
3) ¿Es posible implementar 2) sin asignar valores a p tampoco? (pista: se puede declarar una variable más, que no es ni entero, ni puntero a entero)
*/
#include<stdio.h>

void main(){

  int a = 5,b = 10;
  int *p;

  p = &a;
  printf("%i\n",*p);
  p = &b;
  printf("%i",*p);
  
  
  return;
}