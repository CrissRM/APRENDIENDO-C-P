#include<stdio.h>
#include<string.h>

typedef struct struct_ficha {
        char nombre[40];
        char direccion[50];
        long telefono;
    } ficha;

int main(){
    ficha var1;
    strcpy(var1.nombre,"Cristian Roldan");
    strcpy(var1.direccion,"Beaucheff 1862");
    var1.telefono = 1155654713;

    printf("El nombre es: %s\n",var1.nombre);
    printf("La direccion es: %s\n",var1.direccion);
    printf("Numero de telefono es: %ld\n",var1.telefono);

    puts("Introduzca otro nombre: ");
    fflush(stdout);
    gets(var1.nombre);
    fflush(stdin);
    
    puts("Introduzca otra direccion: ");
    fflush(stdout);
    gets(var1.direccion);
    fflush(stdin);

    puts("Introduzca otro telefono: ");
    fflush(stdout);
    scanf("%ld",&var1.telefono);
    fflush(stdin);

    printf("El nombre es: %s\n",var1.nombre);
    printf("La direccion es: %s\n",var1.direccion);
    printf("Numero de telefono es: %ld",var1.telefono);
    
    
    return 0;
}