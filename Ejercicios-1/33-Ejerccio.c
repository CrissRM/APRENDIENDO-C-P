/*
Escribir un programa, utilizando funciones, que descomponga un número en sus
factores primos. Agregale comentarios al programa donde lo creas necesario.
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

void factores_primos(int num){
    int result;
    int factor,exp;
    printf("%d = ",num);
    for (int i=0;i<num;i++){
        exp = 0;
        if (es_primo(i)){
            result = num;
            if (result%i ==0){
                factor = i;
                while (result%i ==0){
                    exp++;
                    result = result / i;
                }
                if (exp>1){
                    printf("%i^%i ",factor,exp);
                }
                else{
                    printf("%i ",factor);
                }
            }
        }
    }
    
}

int main(){
    int num;

    puts("Ingrese un numero: ");
    fflush(stdout);
    scanf("%d",&num);

    factores_primos(num);
    return 0;
}