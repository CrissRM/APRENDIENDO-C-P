/*
Hacer un programa que liste todos los números primos desde 2 hasta un número
ingresado por el usuario utilizando la función realizada en el ejercicio anterior.
*/

#include<stdio.h>
#include<stdbool.h>

bool es_primo(int num){

    bool res;

    if (num <=1)
        res = false;
    else if (num == 2)
        res = true;
    else{
        int div = 2,cont = 2;
        while (cont ==2 && div<num){
            if (num % div == 0)
                cont++;
            div++;
        }

        if (cont == 2)
            res = true;
        else
            res = false;
    }

    return res;
}


int main(){

    int num;

    puts("Ingrese un numero: ");
    fflush(stdout);
    scanf("%d",&num);

    for (int i=0;i<num+1;i++){
        if (es_primo(i))
            printf("%d ",i);
    }

    return 0;
}