#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int num;
    float num_f,num_35;

    srand(time(NULL)); //Semilla para generar numeros aleatorios, utilizo el tiempo, para que sea variable. Esto me permitirá cambiar la emilla por cada corrida y obtener diferentes numeros aleatorios
    
    puts("Numeros aleatorios en cualquier rango\n");
    for (int i = 0;i<10;i++){
        num = rand();
        printf("%i\n",num);
    }

    puts("Numeros aleatorios entre 1 y 6\n");
    for (int i = 0;i<10;i++){
        num = 1 + rand() % 6;
        printf("%i\n",num);
    }

    puts("Numeros aleatorios entre 13 y 27\n");
    for (int i = 0;i<10;i++){
        num = 13 + rand() % 14;
        printf("%i\n",num);
    }

    puts("Numeros flotantes entre 0 y 1");
    
    for (int i = 0;i<10;i++){
        num_f = (float) rand() / RAND_MAX;
        printf("%f\n",num_f);
    }

    puts("Numeros flotantes entre 3 y 5");
    
    for (int i = 0;i<10;i++){
        num_f = (float) rand() / RAND_MAX;
        num_35 = 3 + num_f*(5-3);
        printf("%.2f\n",num_35);
    }
    return 0;
}