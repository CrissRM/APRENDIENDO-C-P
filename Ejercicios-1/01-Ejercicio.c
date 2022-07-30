/*
 Escribir una funcion que reciba como parametro una cadena de caracteres
 y devuelva la cantidad de caracteres no alfabeticos que hay en la cadena.
 No tener en cuenta la ñ, ni las vocales acentuadas.
*/
#include<stdio.h>

int contar_no_alfabeticos(char cadena[]){

  int cant_alf = 0,cant_noalf = 0,index = 0;

  while (cadena[index] != '\0'){
    if ((cadena[index] >='A' && cadena[index] <='Z') || (cadena[index] >='a' && cadena[index] <='z')){
      cant_alf++;
    }
    else{
      cant_noalf++;
    }
    index++;
  }

  return cant_noalf;
}

void main(){

  char cadena[] = "Cadena de prueba ver lo$ no alfabetico$ 10";
  int cant;
  cant = contar_no_alfabeticos(cadena);
  printf("Caracteres no alfabeticos: %i",cant);
  return;
}