#include<stdio.h>

int main(){

    int a = 10;
    int *ptr_a = NULL;
    ptr_a = &a;

    printf("La direccion de memoria de 'a' es: %p\n",&a);
    printf("La direccion de memoria de 'a' es: %p\n",ptr_a);
    printf("El tamanio de a es: %i\n",sizeof(a));
    printf("El tamanio de ptr_a es: %i",sizeof(ptr_a));
    return 0;
}