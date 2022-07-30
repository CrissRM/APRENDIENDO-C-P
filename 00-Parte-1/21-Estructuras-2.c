#include<stdio.h>
#include<string.h>

struct fecha_nacimiento {
    short dia;
    short mes;
    short anio;
};

struct ficha {
    char nombre[40];
    char direccion[50];
    long telefono;
    struct fecha_nacimiento nacimento;
};

int main(){

    struct ficha var1,var2;

    puts("Ingrese su nombre: ");
    fflush(stdout);
    fgets(var1.nombre,40,stdin);
    fflush(stdin);

    puts("Ingrese su direccion: ");
    fflush(stdout);
    fgets(var1.direccion,50,stdin);
    fflush(stdin);

    puts("Ingrese su telefono: ");
    fflush(stdout);
    scanf("%ld",&var1.telefono);

    puts("Ingrese su dia de nacimiento: ");
    fflush(stdout);
    scanf("%d",&var1.nacimento.dia);

    puts("Ingrese su mes de nacimiento: ");
    fflush(stdout);
    scanf("%d",&var1.nacimento.mes);

    puts("Ingrese su año de nacimiento: ");
    fflush(stdout);
    scanf("%d",&var1.nacimento.anio);

    puts("<----------- FICHA ----------->");
    printf("Nombre: %s\n",var1.nombre);
    printf("Direccion: %s\n",var1.direccion);
    printf("Teléfono: %ld\n",var1.telefono);
    printf("Fecha de nacimiento: %02i-%02i-%i\n",var1.nacimento.dia,var1.nacimento.mes,var1.nacimento.anio);

    puts("\n\nCopiando estructura...");
    fflush(stdout);
    var2 = var1;

    puts("\n<----------- FICHA ----------->");
    printf("Nombre: %s\n",var2.nombre);
    printf("Direccion: %s\n",var2.direccion);
    printf("Teléfono: %ld\n",var2.telefono);
    printf("Fecha de nacimiento: %02i-%02i-%i\n",var2.nacimento.dia,var2.nacimento.mes,var2.nacimento.anio);
    return 0;
}