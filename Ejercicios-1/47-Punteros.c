/*
Todas las celdas de una variable. Implemetr un progrma que imprima las direcciones de las ocho celdas reservaas para una variable var de tipo long.
*/
#include<stdio.h>

int main(){

    long  var = 0x1ABB3C4D;
    // Es otra forma de hacerlo
    unsigned char *ptr = (unsigned char*) &var; 
    // void *ptr_void = &var;
    

    for (int i=0;i<sizeof(var);i++){
        // Otra forma de hacerlo que corresponde con la linea comentada numero 9
        printf("%02x ",*(ptr+i));  
        // printf("Celda %i de memoria: %x\n",i,((char *)ptr_void)+i);
    }

    
    
    return 0;
}