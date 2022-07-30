#include<stdio.h>
//SIRVEN PARA CREAR UN CONJUNTO DE IDENTIFICADORES
enum dias_semana {
    LUNES = 1,MARTES,MIERCOLES,JUEVES,VIERNES,SABADO,DOMINGO
};

int main(){
    enum dias_semana dia;

    dia = LUNES;
    return 0;
}