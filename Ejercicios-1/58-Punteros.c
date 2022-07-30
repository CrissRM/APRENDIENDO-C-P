/*
Suponiendo que "p" es un puntero float que actualmente apunta a la disposicion 100 y que los floats tienen 4 bytes de longitud ¿Cuál es el valor de P después de que se haya ejecutado la siguiente sentencia ? p = p +2

RESPUETA: p = 108
*/

#include<stdio.h>

int main(void){

    //Un ejemplo, para mostrar que se corre 8 bytes:

    float x = 2.5;
    float *px = &x;

    printf("Direccion de memoria de x = %p\n",px);
    printf("Direccion de memoria de p + 2 = %p\n",px+2);
    
    return 0;
}