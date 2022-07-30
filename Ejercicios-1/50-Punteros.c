#include<stdio.h>
/*
Determinar manualmente cuál sería la salida de cada uno de los siguientes fragmentos de código.
Asuma que se ejecutan en una computadora con arquitectura little-endian:

int r = 0xAABBCCDD;
char *p = (void*) &r;
printf("%d", *(p+2));

Como el putero es char, mediante *(p+k) puedo ir mostrando el valor de cada celda, variando el valor de k.
Al puntero le asigno una direccion de memoria, la direccion de memoria de la variable x, pero casteada como void *, ya que la direccion de memoria corresponde a un int, y el puntero es ountero a char (conveniente, para poder recorrer celda a celda).

Se pide *(p+2), es decir, se pide el contenido de la celda de memoria que está dos celdas a la derecha, de la direccion asignada. Como x responde a AABBCDD, y x es int, ocupa 4 bytes, byte 1 = DD, byte 2 = CC, byte 3 = BB, byte 4 = AA
Se pide el valor de la celda BB. 
BB corresponde a 1011 1011. Dado que el puntero es ounter a char con signo, desduzco que el numero pedido es negativo "1"0111011, luego tengo que tomar los otros bytes y pasarlo por la notacion de complemento 2, para esto:
 0111011 ---> pasa a ---> 1000100 le sumo uno ----> 1000101 ---> a decimal 69
 Como es negtivo, la salida debe ser -69
*/
int main() {
    
    int r = 0xAABBCCDD;
    
    char *p = (void*) &r;
    
    printf("%d", *(p+2));

    
   return 0;

}

