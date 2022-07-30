#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

    char letra,res;
    puts("Escriba una letra: ");
    fflush(stdout);
    // cant = scanf("%i",&precio); Equivalente a getchar
    letra = getchar();
    fflush(stdin); // --> Necesario si uso getchar, si uso scanf() puede que tenga o no que usarlo. Generalemte, en mis otros ejercicios lo use

    // putchar(letra); --> Escribe un caracter
    putchar('\n');
    // printf("%c",letra); --> Equivalente a putchar
    puts("Quiere limpiar la pantalla, s/n");
    fflush(stdout);
    res = getchar();
    fflush(stdin); // --> Necesario si uso getchar, si uso scanf() puede que tenga o no que usarlo. Generalemte, en mis otros ejercicios lo use

    if (res == 's')
        system("clear");
    
    return 0;
}