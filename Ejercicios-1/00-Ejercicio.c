/*
 Escribir una funcion que reciba como parametro una cadena de caracteres
 y devuelva la cantidad de digitos numericos que hay en la cadena.
*/

#include<stdio.h>
#include<string.h>
#define LONG_CAD 50

int contar_digitos(char cadena[]){
  int count=0,index = 0;
  while (cadena[index] != '\0')
  {
    if (cadena[index] >='0' && cadena[index] <='9') {
      count++;
    }
    index++;
    
  }
  return count;
}

void main(){
  char cadena[] = "Cristian10.15@gmail.com24713579";
  int digitos;
  
  digitos = contar_digitos(cadena);
  
  printf("La cadena   '%s'    tiene %i digitos",cadena,digitos);
  return;
}