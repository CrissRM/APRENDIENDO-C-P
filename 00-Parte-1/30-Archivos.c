#include<stdio.h>
#include<stdlib.h>

int main(void){

    FILE *ptr;
    char *file = "30-test.txt";
    int letra;

    if ((ptr = fopen(file,"a")) == NULL){
        printf("Ocurrio un error. No se puede abrir el archivo");
        exit(-1);
    }
    printf("Se abrio el archivo para agregar informacion\n");
    fflush(stdout);
    system("clear");
    printf("Ingrese el texto o (ESC + enter) para fianalizar\n");
    fflush(stdout);
    while ((letra = getchar()) != 27)
        fputc(letra,ptr);
    
    fflush(stdout);
    fclose(ptr);

    return 0;
}