/*
Determinar manualmente cuál sería la salida de cada uno de los siguientes fragmentos de código.
Asuma que se ejecutan en una computadora con arquitectura little-endian:

char arr[] = {1,2,3,4};
short *ptr = (void*) &arr[2];
printf("%d", *ptr);

Al puntero short *ptr, le asigno la direccion de memoria de arr[2], casteada como puntero void* para que pueda almacenar, de otro modo habría incompatibilidad de tipos.
 3(decimal) = 0000 0011 --> char utiliza 1 byte = 8 bits
Como se declara puntero a short, y short utliza dos bytes para su representación, al puntero, le estoy asignando los bytes correspondientes a 3 y 4, por lo tanto, lo que guarda es: 0000 0100 0000 0011
El puntero es signed, esto me dice que el numero es positivo. 
Luego  0 |    000 0100 0000 0011 = 1027
La salida es +1027
*/

#include<stdio.h>

int main(){

    char arr[] = {1,2,3,4};
    short *ptr = (void*) &arr[2];
    printf("%d",*ptr);
    


    return 0;
}