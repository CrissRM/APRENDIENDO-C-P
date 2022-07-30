/*
Realizar un programa que solicite una frase y a continuación la escriba modificada de forma que a la A le corresponda la K, a la B la L, ... , ala O la Y, a la P la Z, ala Q la A, ... y alaZIa J
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){

    char cadena[200] = "Realizar un programa que solicite una frase y a continuacion la escriba modificada de forma que a la A le corresponda la K, a la B la L,... a la O la Y,  a la P la Z, a la Q la A,... y a la Z la J";
    
    puts("\nCADENA ORIGINAL: ");
    printf("\n%s\n",cadena);

    for (int i = 0;i<strlen(cadena);i++){
        if ((cadena[i] >= 65 && cadena[i] <= 80) || (cadena[i] >= 97 && cadena[i] <= 112)){
            cadena[i] += 10;
        }
        else if ((cadena[i]>80 && cadena[i]<=90) || cadena[i]>112 && cadena[i]<=122){
            cadena[i] = cadena[i] - 16;
        }
        
    }
    
    puts("\nCADENA MODIFICADA: ");
    printf("\n%s\n",cadena);
    return 0;
}