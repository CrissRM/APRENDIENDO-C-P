/*
Decir cual será la salida:
*/

#include<stdio.h>

int main(void){

    int arr[10] = {23,5,98,65,3,55,73,9,21,85};
    int *p = arr;

    printf("1) %d\n",arr[*(p+7)]);
    printf("2) %d\n",*arr+3);
    printf("3) %d\n",*p++);
    printf("4) %d\n",*(arr+1));
    printf("5) %d\n",*(p)++);
    printf("6) %d\n",*p);
    printf("7) %d\n",*p++);
    printf("8) %d\n",*p);

    /*
    RESPESTA:
        1) 85 
        2) 26 
        3) 23
        4) 5 
        5) 5
        6) 98
        7) 98 
        8) 65
    */
    
    return 0;
}