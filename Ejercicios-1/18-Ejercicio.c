/*
Formar un menú con 4 opciones y al elegir una de ellas mostrar un cartel diciendo
qué opción se eligió o si fue una opción incorrecta. (+)
*/

#include<stdio.h>
#define INGRESAR_AL_SISTEMA "Ingresar al sistema"
#define REGISTRAR_CUENTA "Registrar cuenta"
#define ELIMINAR_CUENTA "Eliminar cuenta"

int main(){
    int opcion;

    puts("<---------- Seleccione una opcion ---------->");
    printf("A) %s\n",INGRESAR_AL_SISTEMA);
    printf("B) %s\n",REGISTRAR_CUENTA);
    printf("C) %s\n",ELIMINAR_CUENTA);
    fflush(stdout);

    scanf("%s",&opcion);

    switch (opcion)
    {
    case 97:
    case 65:
        printf("Usted ingreso la opcion --> %s",INGRESAR_AL_SISTEMA);
        break;
    case 66:
    case 98:
        printf("Usted ingreso la opcion --> %s",REGISTRAR_CUENTA);
        break;
    case 67:
    case 99:
        printf("Usted ingreso la opcion --> %s",ELIMINAR_CUENTA);
        break;
    default:
        printf("Opcion incorrecta");
        break;
    }
    return 0;
}