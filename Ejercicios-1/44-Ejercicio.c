/*
Escribir un algoritmo que lea un número real cualquiera y lo redondee con dos
decimales. Verificar con distintas entradas.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

float redondear(float num){
    float res;
    float parte_entera = (float)((int) num);
    float parte_decimal = (float)((int)((num-parte_entera)*1000000));
    float decimal_1 = (float)((int)(parte_decimal/100000));
    float decimal_2 = (float)((int)(parte_decimal/10000 - (decimal_1*10)));
    float decimal_3 = (float)((int)(parte_decimal/1000 - (decimal_1*100 + decimal_2*10)));
    float decimal_4 = (float)((int)(parte_decimal/100-(decimal_1*1000 + decimal_2*100 + decimal_3*10)));
    float decimal_5 = (float)((int)(parte_decimal/10-(decimal_1*10000 + decimal_2*1000 + decimal_3*100+decimal_4*10)));
    float decimal_6 = parte_decimal-(decimal_1*100000 + decimal_2*10000 + decimal_3*1000+decimal_4*100+decimal_5*10);

    // printf("Parte entera: %f\n",parte_entera);
    // printf("Parte decimal: %f\n",parte_decimal);
    // printf("Decimal 1 -->  %f\n",decimal_1);
    // printf("Decimal 2 -->  %f\n",decimal_2);
    // printf("Decimal 3 -->  %f\n",decimal_3);
    // printf("Decimal 4 -->  %f\n",decimal_4);
    // printf("Decimal 5 -->  %f\n",decimal_5);
    // printf("Decimal 6 -->  %f\n",decimal_6);

    if (decimal_6>5.0)
        decimal_5++;
    if (decimal_5>5.0)
        decimal_4++;
    if (decimal_4>5.0)
        decimal_3++;
    if (decimal_3>5.0){
        decimal_2++;
        if (decimal_2>9.0){
           decimal_1++;
           decimal_2 =0;
           if (decimal_1>9.0){
            parte_entera++;
            decimal_1 = 0;
           }
        }
    }
        
    
        
    
    
    // printf("\n\nParte entera: %f\n",parte_entera);
    // printf("Parte decimal: %f\n",parte_decimal);
    // printf("Decimal 1 -->  %f\n",decimal_1);
    // printf("Decimal 2 -->  %f\n",decimal_2);
    // printf("Decimal 3 -->  %f\n",decimal_3);
    // printf("Decimal 4 -->  %f\n",decimal_4);
    // printf("Decimal 5 -->  %f\n",decimal_5);
    // printf("Decimal 6 -->  %f\n",decimal_6);

    // printf("\n\nDecimal_1 / 10 = %f\n",decimal_1/10);
    // printf("Decimal_2 / 100 = %f\n",decimal_2/100);
    // printf("Los anteriores sumados= %f\n",(decimal_1/10)+(decimal_2/100));
    res = parte_entera + (decimal_1/10) + (decimal_2/100);
    return res;
}

int main(){
    float numero;
    srand(time(NULL));
    for (int i=0;i<10;i++){
        if (i%2 ==0)
            numero = (float)rand() /RAND_MAX;
        else
            numero = -(float)rand() /RAND_MAX;
            
        (numero>0) ? printf("El numero = %f se redondea a dos cifras como -> %.2f\n",numero,redondear(numero)) : printf("El numero = %f se redondea a dos cifras como -> %.2f\n",numero,-redondear(-numero));
    }
    return 0;
}

