/*
Realizar un programa que lea una lista de alumnos y sus correspondientes notas de final de curso y que dé como resultado el tanto por ciento de los alumnos aprobados y suspendidos.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define CANT_ALUMNOS 10

struct alumno {
    char nombre[40];
    char nota;
};

int main(){

    struct alumno alumnos[CANT_ALUMNOS];
    char nota;
    short aprobado = 0,reprobado = 0;

    srand(time(NULL));

    for (int i=0;i<CANT_ALUMNOS;i++){
        puts("Ingrese el nombre: ");
        fflush(stdout);
        fgets(alumnos[i].nombre,40,stdin);
        fflush(stdin);
        nota = 1 + rand()%10;
        alumnos[i].nota = nota;
    }

    puts("NOTAS");
    printf("[");
    for (int i=0;i<CANT_ALUMNOS;i++)
        printf("%i ",alumnos[i].nota);
    printf("]");
        
    

    for (int i=0;i<CANT_ALUMNOS;i++){
        if (alumnos[i].nota >=4)
            aprobado++;
        else
            reprobado++;
    }

    printf("\nPorcentaje de aprobados: %.2f\n",((float) aprobado/CANT_ALUMNOS)*100);
    printf("Porcentaje de aprobados: %.2f\n",((float) reprobado/CANT_ALUMNOS)*100);
    
    return 0;
}