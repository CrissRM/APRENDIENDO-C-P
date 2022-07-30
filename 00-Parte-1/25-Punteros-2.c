#include<stdio.h>
#include<stdlib.h>


int main(){

    int a[10]= {0,1,2,3,4,5,6,7,8,9};
    
    int *p,*q;

    p = a;
    q = p;
    
    printf("El valor de a[0] = %i\n",a[0]);
    printf("Usando el puntero p valor de a[0] = %i\n",*p);
    printf("Usando el puntero q valor de a[0] = %i\n\n",*q);
    

    p++;
    q = p +1;
    printf("El valor de a[1] = %i\n",a[1]);
    printf("Usando el puntero p valor de a[1] = %i\n",*p);
    printf("Usando el puntero q valor de a[2] = %i\n\n",*q);



    q--;
    p = q +5;
    printf("El valor de a[2] = %i\n",a[2]);
    printf("Usando el puntero p valor de a[6] = %i\n",*p);
    printf("Usando el puntero q valor de a[1] = %i\n\n",*q);

    return 0;
}