/*
Pasar un período expresado en segundos a un período expresado en días, horas,
minutos y segundos.
*/

#include<stdio.h>

int main(){

    int entrada;

    puts("Ingrese un periodo expresado en segundos");
    fflush(stdout);

    scanf("%d",&entrada);

    printf("\n\nEl periodo indicado %d, tiene un equivalente a %.2f dias\n",entrada,(float) entrada/(3600*24));
    printf("El periodo indicado %d, tiene un equivalente a %.2f horas\n",entrada,(float) entrada/3600);
    printf("El periodo indicado %d, tiene un equivalente a %.2f mintuos\n",entrada,(float) entrada/60);



    return 0;
}