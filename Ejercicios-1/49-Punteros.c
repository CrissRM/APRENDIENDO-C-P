/*
Explorador de memoria, memexplorer.c
En el capítulo anterior mostramos que era posible utilizar el depurador gdb para observar la representación interna de una variable, i.e. el contenido de cada una sus celdas. También se dijo que dicha tarea era viable implementando un programa que manipule punteros. Se le pide escribir tal programa, uno que imprima el contenido de cada byte ocupado por var, una variable que podría ser de cualquier tipo y contener cualquier valor.
*/

#include<stdio.h>

int main(){

    int var_i = 120;
    float var_f = 120.345;
    short var_s = 12;
    long var_l = 12345;
    void *pvoid[4] = {&var_i,&var_f,&var_s,&var_l};
    char variable[][20] = {"int var_i" , "float var_f" , "short var_s","long var_l"};

    for (int j=0;j<4;j++){
        printf("Para %s --> ",variable[j]);
        unsigned char *ptr =(unsigned char*)pvoid[j];
        for (int i=0;i<sizeof(ptr);i++)
            printf("%02x ",*(ptr+i));
        printf("\n");
    }
    
    return 0;
}