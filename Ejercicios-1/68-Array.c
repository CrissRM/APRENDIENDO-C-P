/*
Si los números de un vector representan los coeficientes de un polinomio (de grado no mayor a 10), escribir un algoritmo que calcule la especialización de ese polinomio con un número que elige el usuario
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float *cargar_vector(int *);
void mostrar_polinomio(float*,int);
void evaluar_polinomio(float*,int);

int main(void){
    int len;
    float *vector = cargar_vector(&len);
    mostrar_polinomio(vector,len);
    evaluar_polinomio(vector,len);
    free(vector);
    return 0;
}

void mostrar_polinomio(float*vector,int len){
    puts("EL POLINOMIO ES: ");
    for (int i=len;i>=0;i--)
        if (vector[i] !=0)
            (i == 0 ) ? (printf("%+.2f%i ",vector[i],i)) : (printf("%+.2f x^%i ",vector[i],i));
    puts(" ");

}

void evaluar_polinomio(float*vector,int len){
    float valor,respuesta =0;
    puts("Ingrese el valor a evaluar: ");
    fflush(stdout);
    scanf("%f",&valor);
    
    for (int i=len;i>=0;i--)
        (i==0) ? (respuesta += vector[i]) : (respuesta +=vector[i]*pow(valor,i));
    
    printf("EL RESULTADO DE EVALUAR %.2f ES: %.2f",valor,respuesta);
}

float *cargar_vector(int *tam){
    int len;
    printf("Ingrese el grado del polinomio: ");
    fflush(stdout);
    scanf("%i",&len);
    while (len<=0 || len>10){
        puts("El grado del polinomio debe ser un entero positivo no mayor a 10 ");
        puts("Ingrese el grado nuevamente: ");
        fflush(stdout);
        scanf("%i",&len);
    }
    float *vector = (float*)malloc((len+1)*sizeof(float));
    *tam = len;
    for (int i=len;i>=0;i--){
        printf("Ingrese el coeficiente de grado %i: ",i);
        fflush(stdout);
        scanf("%f",&vector[i]);
    }

    return vector;
}