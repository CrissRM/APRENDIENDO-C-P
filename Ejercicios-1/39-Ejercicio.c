/*
Dado un texto terminado en punto, determinar cuál es la vocal que aparece con
mayor frecuencia.
*/
#include<stdio.h>
#include<string.h>



int main(){ 
    int cant_vocal[5] = {0};
    unsigned char texto[] = "Dado un texto terminado en punto, determinar cuál es la vocal que aparece con mayor frecuencia.";

    for (int i = 0;i<strlen(texto);i++){
        switch (texto[i])
        {
        case 65:
        case 97:
        case 160:
        case 181:
            cant_vocal[0]++;
            break;
        case 69:
        case 101:
        case 130:
        case 144:
            cant_vocal[1]++;
            break;
        case 73:
        case 105:
        case 161:
        case 214:
            cant_vocal[2]++;
            break;
        case 79:
        case 111:
        case 162:
        case 224:
            cant_vocal[3]++;
            break;
        case 85:
        case 117:
        case 163:
        case 233:
            cant_vocal[4]++;
            break;
        }
    }

    printf("La vocal 'A' aparece %i\n",cant_vocal[0]);
    printf("La vocal 'E' aparece %i\n",cant_vocal[1]);
    printf("La vocal 'I' aparece %i\n",cant_vocal[2]);
    printf("La vocal 'O' aparece %i\n",cant_vocal[3]);
    printf("La vocal 'U' aparece %i\n",cant_vocal[4]);
    
    return 0;
}