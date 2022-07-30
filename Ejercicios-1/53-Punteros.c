/*
Determinar manualmente cuál sería la salida de cada uno de los siguientes fragmentos de código.
Asuma que se ejecutan en una computadora con arquitectura little-endian:

short x = -280;
char *p = (void*)&x;
printf("%d", *(p+1));

Primero represento en binario el numero -280:
    -280  =  0000 0001 0001 1000 
    complemento a2 de 0000 0001 0001 1000  --> 1111 1110 1110 1000 
    Entonces  -280 = 1 | 111 1110 1110 1000 

Por lo tanto, el punter char guarda la direccion de memoria del primer byte.
Se pide el segundo (ptr+1), eso es 111 1110   ó 0111 1110 y eso se decodifica como:  126
*/
#include<stdio.h>

int main(){

    short x = -280;
    char *p = (void*)&x;
    printf("%d", *(p+1));
    
    return 0;
}