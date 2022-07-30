/*
Leer N y luego N lotes de números reales que terminan con un valor 0, y calcular
la media individual de cada lote, junto con la media total de todos los números
ingresados. No se deben guardar todos los datos.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num,componente = 1,suma = 0,suma_total = 0;
    srand(time(NULL));

    puts("Indique un numero");
    fflush(stdout);
    scanf("%i",&num);

    int numeros[num][num];
    float media_lote[num];

    for (int i = 0; i<num;i++){
        for (int j=0;j<num;j++){
            while (componente % 10 !=0)
                componente = rand() % 10000;
            numeros[i][j] = componente;
            componente = 1;
        }
    }

    for (int i = 0; i<num;i++){
        for (int j=0;j<num;j++){
            suma += numeros[i][j];
        }
        media_lote[i] = suma/(float)num;
        suma = 0;
        suma_total += media_lote[i];
    }

    for (int i = 0; i<num;i++){
        printf("Media del lote %i = %.0f\n",i+1,media_lote[i]);
    }

    printf("Media total = %.2f",suma_total/(float) num);
}