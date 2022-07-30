#include<stdio.h>

int main(void){

    int a[50],b;
    int *pa,*pb;

    pa = &a[30];
    pb = pa;
    printf("Valor en a[30] = %i\n",a[30]);
    *pa = 100;
    printf("Valor en a[30] = %i\n",a[30]);
    b = *pb;
    printf("Valor en b = %i\n",b);
    pb++;
    *pb = b*2;
    printf("Valor en pb = %i\n",*pb);

    
    return 0;
}