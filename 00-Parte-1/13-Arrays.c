#include<stdio.h>

float media(int edades[],int tam){
    int sum=0;
    for (int i = 0;i<tam;i++){
        sum += edades[i];
    }

    return sum/tam;
}

int main(){
    int tam = 8;
    int edades[tam];
    float edades_media;

    for (int i = 0; i<tam;i++){
        printf("Indique la %i edad: ",i+1);
        scanf("%i",&edades[i]);
    }

    edades_media = media(edades,tam);

    printf("La media de las edades es: %f",edades_media);
    

    return 0;
}