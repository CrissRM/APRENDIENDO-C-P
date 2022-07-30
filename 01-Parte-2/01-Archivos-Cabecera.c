#include<stdio.h>
#include<string.h>
#include "01-empleados.h"


int main(){
    Empleado e;
    strncpy(e.nombre,"Cristian",30);
    strncpy(e.apellido,"Roldan",40);
    strncpy(e.identificador,"223178",9);
    e.cargo = ANALISTA;
    print_empleado(&e);
    return 0;
}

