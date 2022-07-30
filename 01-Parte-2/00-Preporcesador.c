#include<stdio.h>
#define LIMITE 30
#define principal main
#define AREA_RECTANGULO(x,y) (x*y)



int principal(){
    int x=3,y=9;
    printf("El valor del limite es: %i",LIMITE);
    printf("El area del rectangulo %i x %i es: %i",x,y,AREA_RECTANGULO(x,y));
    #if LIMITE < 50
        printf("Limite inferior a 50");
    #else
        printf("Limite superior 50");
    #endif
    return 0;
}