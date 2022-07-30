/*
Escribir una funcion para validar una nueva clave de acceso.
La función debera recibir una cadena de caracteres, que contendra la clave
candidata, ingresada por el usuario; y devolvera true o false, dependiendo de
si cumple con las condiciones establecidas.
La clave debe:
- Tener como minimo entre 4 y 8 digitos alfanuméricos
- Solo podra tener caracteres numericos y letras minusculas (excluida la ñ)
- Al menos debe haber una letra y un número en la clave
Ejemplos:
validar("29039") devuelve false
validar("a32i4") devuelve true
validar("examen") devuelve false
validar("colon850") devuelve true
validar("29a") devuelve false
validar("az234m098") devuelve false
validar("az234m09") devuelve true
validar("año2020") devuelve false
*/
# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# define MAX 8
# define MIN 4

bool validar(char password[]){
  bool check = false;
  int i = 0,letras = 0,numeros = 0;
  bool ciclar = true;

  if (strlen(password) >= MIN || strlen(password) <=MAX){

  while (i<strlen(password) && ciclar){
    if (password[i] >='a' && password[i] <='z'){
      letras++;
    }
    else if (password[i] >='0' && password[i] <='9'){
      numeros++;
    }
    else{
        ciclar=false;
    }
    i++;
    }
}

if (ciclar && letras>0 && numeros>0){
  check = 1;
}
  return check;
}

void main(){

  char password[]="";
  bool res;

  printf("Ingrese su clave: ");
  scanf("%s",&password);
  res = validar(password);

  if (res){
    printf("True");
  }
  else{
    printf("False");
  }
  return;
}