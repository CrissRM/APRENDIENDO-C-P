/*
Ingresar por teclado dos numeros y generar 10 numeros aleatorios entre esos dos
*/
#include<stdio.h>
#include<stdlib.h>

int main(){

    int num_a,num_b,random;

    puts("Ingresa el primer numero: ");
    fflush(stdout);
    scanf("%i",&num_a);

    puts("Ingresa el segundo numero: ");
    fflush(stdout);
    scanf("%i",&num_b);

    num_a>num_b ? printf("Los 10 numeros aleatorios entre %i y %i son: \n",num_b,num_a) : printf("Los 10 numeros aleatorios entre %i y %i son: \n",num_a,num_b);

    if (num_a<num_b) {
        for (int i = 0;i<10;i++){
            random = (num_a) + rand() % ((num_b-num_a)+1);
            printf("Numero %i ---> %i\n",i+1,random);
        }
    }
    else{
        for (int i = 0;i<10;i++){
            random = (num_b) + rand() % ((num_a-num_b)+1);
            printf("Numero %i ---> %i\n",i+1,random);
        }
    }
    

    return 0;
}
