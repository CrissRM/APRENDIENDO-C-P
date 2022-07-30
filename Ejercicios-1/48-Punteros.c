/*
Representación interna de NULL. Mostrar el valor contenido en cada una de las ocho celdas de un puntero inicializado con NULL.
*/
#include<stdio.h>

int main(){

    int *ptr = NULL;
    
    for (int i=0;i<sizeof(ptr);i++){
        printf("%02x ",(ptr+i));
    }

    return 0;
}