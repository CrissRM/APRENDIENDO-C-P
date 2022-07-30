/*
Se leen 300 datos (usar constantes para poder achicar esta cantidad) que
representan el peso de la misma cantidad de niños que hay internados en un
hospital. Se desea confeccionar la siguiente tabla:
- Entre 0,000 y 10,000 kg. hay ............... niños.
- Entre 10,001 y 20,000 kg. hay ............. niños.
- Entre 20,001 y 30,000 kg. hay ............. niños.
- Más de 30,000 kg. hay .................... niños.
- Nota: Probar el ejercicio modificando 300 por 15, tratar de repartir los valores
en diferentes rangos. Verificar. Luego, utilizando la función random, simular el
ingreso de los 300 datos.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 3000
#define MAX_PESO 40
#define MIN_PESO 5
#define RANGOS_A_EVALUAR 4

int main(){
    float random,random_min_max;
    int cant[RANGOS_A_EVALUAR] ={0};
    srand(time(NULL));
    
    for (int i=0;i<MAX;i++){
        random =(float)rand() / RAND_MAX;
        random_min_max = MIN_PESO + random*(MAX_PESO-MIN_PESO);
        if (random_min_max<=10)
            cant[0]++;
        else if (random_min_max<=20 && random_min_max>10)
            cant[1]++;
        else if (random_min_max<=30 && random_min_max>20)
            cant[2]++;
        else if (random_min_max>30)
            cant[3]++;
    }

    
    printf("- Entre 0,000 y 10,000 kg. hay %i nenes.\n",cant[0]);
    printf("- Entre 10,001 y 20,000 kg. hay %i nenes.\n",cant[1]);
    printf("- Entre 20,001 y 30,000 kg. hay %i nenes.\n",cant[2]);
    printf("- Mas de 30,000 kg. hay %i nenes.\n",cant[3]);
    
    return 0;
}