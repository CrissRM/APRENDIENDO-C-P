/*
Por cada alumno que rindió un examen de una materia se lee el número de legajo y la nota obtenida. Se desea saber la cantidad de alumnos que rindieron el examen, el porcentaje de alumnos que obtuvieron cada nota, y el (o los) legajos de la nota más alta.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct  {
    int legajo;
    int nota;
} alumnos;

alumnos * leer_datos(short *);
void notas_altas(alumnos *,int);

int main(void){
    short num;
    alumnos *vector;
    vector = leer_datos(&num);
    notas_altas(vector,num);
    free(vector);
    return 0;
}

alumnos * leer_datos(short *num){
    system("clear");
    int cant;
    puts("Ingrese la cantidad de alumnos a registrar");
    fflush(stdout);
    scanf("%i",&cant);
    *num = cant;
    alumnos *vector = (alumnos*) malloc(cant*sizeof(alumnos));
    system("clear");
    
    for (int i=0;i<cant;i++){
        puts("---------------------------------------------------------");
        puts("Ingrese legajo/padron: ");
        fflush(stdout);
        scanf("%i",&vector[i].legajo);
        puts("Ingrese la nota: ");
        fflush(stdout);
        scanf("%i",&vector[i].nota);
    }

    return vector;
}

void notas_altas(alumnos *lista_alumnos,int cant){
    int index = 1;
    alumnos *alumno = malloc(index*sizeof(alumnos));
    alumno[0].legajo = lista_alumnos[0].legajo;
    alumno[0].nota = lista_alumnos[0].nota;

    for (int i=1;i<cant;i++){
        if (lista_alumnos[i].nota == lista_alumnos[index-1].nota){
            index++;
            alumno = realloc(alumno,index*sizeof(alumnos));
            alumno[index-1].legajo = lista_alumnos[i].legajo;
            alumno[index-1].nota = lista_alumnos[i].nota;
        }
        else if (lista_alumnos[i].nota > lista_alumnos[index-1].nota){
            index = 1;
            alumno = realloc(alumno,index*sizeof(alumnos));
            alumno[0].legajo = lista_alumnos[i].legajo;
            alumno[0].nota = lista_alumnos[i].nota;
        }
    }
    system("clear");
    puts("\nLAS NOTAS MAS ALTAS SON: ");
    for (int i=0;i<index;i++){
        puts("-------------------------------------------");
        printf("Legajo/Padron: %hu\n",alumno[i].legajo);
        printf("Nota: %i\n",alumno[i].nota);
    }

    free(alumno);
}