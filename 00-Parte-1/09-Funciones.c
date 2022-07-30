/*
1. Escribir una función que calcule el factorial de un número recibido por parámetro

2. Escribir una función modular, que solicite el ingreso de un valor validando que el mismo este entre 0 y 20; y luego calcule e unforme el factorial de un número ingresado. 
Si el número ingresado no cumple con lo solicitado, informar y solicitar el reingreso de numero. Rpetir la operación hasa que el número sea válido

3. Ecribir un programa modular, que solicite el ingreso de dos valores, validando que el primero este entre 0 y 50, y el segundo entre el primero y 100.
Luego intercambie el valor de las variables, mediante el uso de una funcion desarrollada a tal fin. Muestre el valor de ambas variables, ntes y despues del intercambio
*/

#include<stdio.h>

int factorial(int num){
  int res=1;
  for (int i = 1; i<=num;i++){
    res *=i;
  }
  return res;
}

int validar_numero(){
  int num;
  printf("\n\nIngrese un numero en el rango 0 - 20: ");
  scanf("%i",&num);
  while (num<0 || num>20){
    printf("Debe ingresar un numero en el rango 0 - 20\n");
    printf("Ingrese un numero en el rango 0 - 20: ");
    scanf("%i",&num);
  }
  return num;
}

int ingresar_validar_numero(int min,int max){
  int num;
  
  printf("\nPor favor, ingrese un numero entre %i y %i: \n",min,max);
  scanf("%i",&num);
  while (num<min || num>max){
    printf("El numero debe estar dentro del rango %i y %i\n",min,max);
    printf("Por favor, ingrese un numero entre %i y %i:  \n",min,max);
    scanf("%i",&num);
  }

  return num;
}

void intercambio(int *num_a,int *num_b){
  int aux;
  aux = *num_a;
  *num_a = *num_b;
  *num_b = aux;
  
}

int main(){
  int num,num_a,num_b;
  long respuesta;
  
  num = validar_numero();
  respuesta = factorial(num);
  printf("El facotorial del numero %i, es %i\n",num,respuesta);

  num_a = ingresar_validar_numero(0,50);
  num_b = ingresar_validar_numero(num_a,100);
  printf("\nLos valores antes del intercambio son: a = %i y b= %i",num_a,num_b);
  intercambio(&num_a,&num_b);
  printf("\nLos valores despues del intercambio son: a = %i y b= %i",num_a,num_b);
  return 0;
}

