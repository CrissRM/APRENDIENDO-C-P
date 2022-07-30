#include<stdio.h>

int saludar(void);

int main(void){

    int (*f_saludar)(void) = saludar;
    f_saludar();
    return 0;
}

int saludar(void){
    
    printf("Hola Mundo desde un puntero a funcion");
    return 0;
}