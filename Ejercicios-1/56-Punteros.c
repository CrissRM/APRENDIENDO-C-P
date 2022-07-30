/*
Escriba un programa que imprima los 256 datos posibles que podrían ser codificados en un byte de memoria. Indique el valor de cada dato cuando este se interpreta como unsigned char y como char. A continuación se muestran unas pocas líneas de la tabla de equivalencias pedida.
La primera columna representa una secuencia de 8 bits; la segunda, el dato de tipo unsigned char codificado en esos 8 bits; y la tercera, el dato char detrás de la misma secuencia.
*/
#include<stdio.h>

int main(){
    
    for (int i = 0;i<256;i++)
        printf("%X  %u  %d\n",i,(unsigned char)i,(char)i);

    int x = {1,2,3};
    int (*p)[3] = &x;
    return 0;
}
