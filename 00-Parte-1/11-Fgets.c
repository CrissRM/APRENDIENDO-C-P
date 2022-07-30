#include<stdio.h>
#define LONG_nombres 15
#define LONG_apellidos 20
#define LONG_domicilio 30

char nombres[LONG_nombres];
char apellidos[LONG_apellidos];
char domicilio[LONG_domicilio];
int edad;

void main(){

  printf("Nombres: ");
  fgets(nombres,LONG_nombres,stdin);
  fflush(stdin);

  printf("Apellidos: ");
  fgets(apellidos,LONG_apellidos,stdin);
  fflush(stdin);

  printf("Domicilio: ");
  fgets(domicilio,LONG_domicilio,stdin);
  fflush(stdin);

  printf("Tus nombres son %s\n",nombres);
  printf("Tus apellidos son %s\n",apellidos);
  printf("Tu domicilio es %s\n",domicilio);

  return;
}