/*
El puntero narcisista. Definir un puntero que se apunte a sí mismo, que almacene su propia direccion de memoria
*/
#include<stdio.h>

int main(){
    
    /*
    Esta mal:
    int *ptr;
    ptr = &ptr;
    Porque primero se dice que ptr almacena la dirección de un entero, y la segunda, se le asgina la direccion de un puntero a entero, y como la direccon de un entero y la de un puntero a entero no son iguales, hay icompatibilidad
    */

    void *ptr;
    ptr = &ptr;
    printf("Direccion del puntero: %p\n",ptr);
    printf("Direccion del puntero: %p\n",&ptr);
    return 0;
}