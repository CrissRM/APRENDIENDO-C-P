/*
Hacer una función que, dado los coeficientes de un polinomio de segundo grado
(3 números reales), indique si tiene o no raíces reales (devuelve verdadero o
falso).
*/
#include<stdio.h>
#include<stdbool.h>

bool analizar_raices(int a,int b,int c){
    bool res;
    int discriminante;

    discriminante = (b*b) - (4*a*c);

    if (discriminante >=0)
        res = true;
    else
        res = false;
    return res;
}

int main(){

    int a,b,c;

    puts("Indique el coeficiende cuadratico: ");
    fflush(stdout);
    scanf("%i",&a);

    puts("Indique el coeficiende lineal: ");
    fflush(stdout);
    scanf("%i",&b);

    puts("Indique el coeficiende independiente: ");
    fflush(stdout);
    scanf("%i",&c);

    if (analizar_raices(a,b,c))
        puts("Tiene raices reales");
    else
        puts("No tiene raices reales");
    return 0;
}