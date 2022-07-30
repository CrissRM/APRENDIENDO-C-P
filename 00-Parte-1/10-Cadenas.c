#include<stdio.h>
#define MF 15

int main(){

  char cadena[MF] = "Hola Mundo";
  int j;

  printf("Cadena: %s \n",cadena);

  for (int i =0;i<=MF;i++){
    printf("Caracter en la posicion %2i --> %c\n",i,cadena[i]);
  }

  printf("La cadena ocupa: %i, en bytes\n",sizeof(cadena));
  j=0;
  while (cadena[j] != '\0') 
  {
    printf("Char en la posicion %i, --> %c\n",j,cadena[j]);
    j++;
  }
  
  printf("La cadena tiene %i caracteres",j);
  return 0;
}




