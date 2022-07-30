/*
Hacer una función que devuelva las raíces reales de un polinomio de segundo
grado y, además, indique si tiene o no raíces reales (una booleana)
*/

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool existen_raices(int a,int b,int c){
    int discriminante;
    bool res;

    discriminante = (b*b) - (4*a*c);

    if (discriminante>=0)
        res = true;
    else
        res = false;
    
    return res;
    
}

void calcular_raices(int a,int b,int c,float *r1,float *r2){
    float discriminante;
    
    discriminante = pow(((float)b*b) - (4*(float)a*c),0.5);

    *r1 = ((-b) + discriminante)/(2*(float)a);
    *r2 = ((-b) - discriminante)/(2*(float)a);
}

int main(){

    int a,b,c;
    float raiz_1=0,raiz_2=0;
    float *r1 =&raiz_1,*r2 =&raiz_2;
    

    puts("Indique el valor del coeficiente cuadratico: ");
    fflush(stdout);
    scanf("%d",&a);

    puts("Indique el valor del coeficiente lineal: ");
    fflush(stdout);
    scanf("%d",&b);

    puts("Indique el valor del coeficiente independiente: ");
    fflush(stdout);
    scanf("%d",&c);

    if (!existen_raices(a,b,c))
        puts("No tiene raices reales");
    else{
        calcular_raices(a,b,c,r1,r2);
        printf("Las raices son r1 = %.2f y r2 = %.2f",raiz_1,raiz_2);
    }
    return 0;
}