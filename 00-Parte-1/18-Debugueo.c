/*
Comoandos de gdb: gcc -g 20-Debugueo.c -o 20-Debugueo.exe
    1. "l" : Lista todo el programa
    2. "start": Inicia el debugueo, se para en la primera linea de código y espera la instruccion
    3. "next": ejecuta la linea de código
    4. Para ver una pariable que ya está en la memoria, debo imprimiarla, para esto uso, el comando p nombre_variable. Por ejm: p x}
    5. Para ver la representacion interna primero tengo que ver la direccion de memori, con p &x, esto me traera la direccion de memori en código hexadecimal
    6. Luego examino con el comando x.  Para esto hago:
        x/2bx direccion_de_memoria  --> Esto es: Examina (x) dos bytes (2b por ser un short) en codigo exadecimal (x)  yluego la direccion_de_memoria
    7. q --> Para salir

*/
#include<stdio.h>

int main(){

    unsigned short x = 100;
    unsigned int y = 298;
    return 0;
}