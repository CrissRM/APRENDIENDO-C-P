/*
Diseño de la  ficha para almacenar datos relativos a los libros o revistas científicas de una biblioteca. Por cada libro o revista, figurará la siguiente información:
        1. Número de referencia.
        2. Título.
        3. Nombre del autor.
        4. Editorial.
        5. Clase de publicación (libro o revista).
        6. Número de edición (sólo libros).
        7. Año de publicación (sólo libros).
        8. Nombre de la revista (sólo revistas).

Realizar un programa  utilizando una estructura que petmita almacenar en un array la información correspondiente a una biblioteca. Listar dicha información. La estructura del programa constará de las funciones siguientes:

A) Una función principal "main" que llamará a una "función leer" para introducir los datos para los elementos del array y a una "función escribir" para visualizar todos los elementos del array.

B) Una función leer con el prototipo siguiente:
        int leer(struct flcha bibli[], int n);
    
    Esta función recibe como parámetros el array donde hay que almacenar los datos de los libros o revistas leídos y el número máximo de elementos que admite dicho array. La función devolverá como resultado el número de elementos leídos (valor menor o igual que el número máximo de elementos). Cada vez que se introduzcan los datos de un libro o revista, la función visualizará un mensaje preguntando si se quieren introducir más datos.

C) Una función escribir con el prototipo siguiente:
        void escribir ( strrrct ficha bibli [ ] , int n) ;
    Esta función recibirá como parámetros el array cuyos elementos hay que visualizar y el número real de elementos que tiene el array. Cada vez que se visualice un libro o revista se visualizará un mensaje que diga "pulse la tecla <Entrar> para continuar" de forma que al pulsar la tecla Entrar se limpie la pantalla y se visualice el siguiente elemento del array
*/

#include<stdio.h>
#define MAX_ELEMENTOS 10

struct ficha {
    unsigned int num_ref;
    char titulo[50];
    char autor[40];
    char editorial[30];
    char clase_publicacion[7];
    union libro_revita {
        struct libro {
            unsigned int num_edicion;
            short anio_publicacion;
        };
        char nombre_revista[50];
    };
};

int leer(struct flcha bibli[], int n){
    int i=0;
    char res = 83;
    while (i<n && (res == 83 || res == 115)){
        puts("Ingrese el numero de referencia: ");
        fflush(stdout);
        scanf("%i",&bibli[i].num_ref);
    }
}


int main(void){
    struct ficha lista[MAX_ELEMENTOS];
    leer(lista,MAX_ELEMENTOS);
    return 0;
}

