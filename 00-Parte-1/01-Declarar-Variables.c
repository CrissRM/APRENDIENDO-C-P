/*
1. [tipo_de_dato] [nombre_variable] = [valor]
2. [tipo_de_dato] [nombre_variable]

Tipos de datos:
  A. int --> Entero
  B. short --> Entero corto
  C. long --> Entero largo
  D. char --> UN Caracter

Con la función sizeof, puedo saber la cantidad de memoria que me ocupan las variables
*/
#include<stdio.h>

int main(){
  int x = 100;
  char caracter = 'C';
  printf("Entero corto (short): %i bytes\n",sizeof(short));
  printf("Entero corto positivo (unsigned short): %i bytes\n",sizeof(unsigned short));
  printf("Entero  (int): %i bytes\n",sizeof(int));
  printf("Entero positivo (unsigned int): %i bytes\n",sizeof(unsigned int));
  printf("Entero largo (long): %i bytes\n",sizeof(long));
  printf("Entero largo largo (long long): %i bytes\n",sizeof(long long));
  printf("Real (float): %i bytes\n",sizeof(float));
  printf("Real (double): %i bytes\n",sizeof(double));
  printf("Caracter: %i",sizeof(char));

  return 0;
}