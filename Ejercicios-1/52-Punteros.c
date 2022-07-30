/*
Determinar manualmente cuál sería la salida de cada uno de los siguientes fragmentos de código.
Asuma que se ejecutan en una computadora con arquitectura little-endian:

int M[4][2] = {1};
const int * const ptr = &M[0][0];
for(int i=0; i< sizeof(M[0]); i++)
    printf("%d ", *(ptr+i));
*/

#include<stdio.h>

int main(){
    int M[4][2] = {1};
    const int * const ptr = &M[0][0];
    
    for(int i=0; i< sizeof(M[0]); i++)
        printf("%d ", *(ptr+i));

    return 0;
}