/*
La relación entre temperaturas Celsius y Fahrenheit está dada por: C = 5/9 * (F-
32) Escribir un algoritmo que haga una tabla de valores Celsius-Fahrenheit, para
valores entre 0 °F y 200 ºF, con intervalos de 10º.
*/

#include<stdio.h>
#define MAX 200

float convertir_F_C(int num){
    float C;
    C = ((float) 5/9)*((float)num-32);
    return C;
}

int main(){
    
    for (int i=0;i<MAX+10;i+=10){
        printf("%i °F ---> %.3f °C\n",i,convertir_F_C(i));
    }
    return 0;
}