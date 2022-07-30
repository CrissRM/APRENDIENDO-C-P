/*
Escribir un programa que lea el nombre de una persona y, luego, lo salude.
*/
#include<stdio.h>
#include<string.h>
#define LONG_NOMBRE 30
#define LONG_APELLIDO 40


int main(){
    char nombre[LONG_NOMBRE];
    char apellido[LONG_APELLIDO];
    
    puts("Ingrese su nombre: ");
    fflush(stdout);
    fgets(nombre,LONG_NOMBRE,stdin);
    fflush(stdin);

    puts("Ingrese su apellido: ");
    fflush(stdout);
    fgets(apellido,LONG_APELLIDO,stdin);
    fflush(stdin);

    printf("Bienvenido %s %s",nombre,apellido);
   return 0; 
}
