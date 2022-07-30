/*
 Solicite el ingreso de 2 numeros, validando que el primero
 se encuentre entre 1 y 1000, y el segundo entre el primero
 ingresado y 10000. Luego informe si el primero es divisor
 del segundo
*/

#include<stdio.h>


int validar_ingreso(int min,int max){
  int num;
  printf("\nIngrese un numero entre %i y %i: ",min,max);
  scanf("%i",&num);
  while (num<min || num > max){
    printf("\nDebe ingresar un numero dentro del rango pedido");
    printf("\nIngrese un numero entre %i y %i: ",min,max);
    scanf("%i",&num);
  }

  return num;
}

void main(){
  int num_1,num_2;
  
  
  num_1 = validar_ingreso(1,1000);
  num_2 = validar_ingreso(num_1,10000);

  if (num_2 % num_1 == 0){
    printf("\nEl primero es divisor del segundo");
  }
  else{
    printf("\nEl primero NO es divisor del segundo");
  }

  return;
}