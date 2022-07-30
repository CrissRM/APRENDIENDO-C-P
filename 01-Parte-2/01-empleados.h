#include<stdio.h>

typedef enum cargo_t
{
    ANALISTA,
    DESARROLLO,
    SISTEMAS
} Cargo;

typedef struct empleado_t
{
    char nombre[40];
    char apellido[40];
    char identificador[9];
    Cargo cargo;
} Empleado;

void print_empleado(Empleado* empl){
    char*cargo;

    printf("----------EMPLEADO----------\n");
    printf("Nombre: %-40s\n",empl->nombre);
    printf("Apellido: %-40s\n",empl->apellido);
    printf("PID: %-40s\n",empl->identificador);

    switch (empl->cargo)
    {
    case ANALISTA: 
        cargo = "Analista";
         break;
    case SISTEMAS:
        cargo = "Sistemas";
        break;
    case DESARROLLO:
        cargo = "Desarrollo";
        break;
    }
    printf("Cargo: %-40s\n",cargo);
    printf("--------------------------------");
    
}
