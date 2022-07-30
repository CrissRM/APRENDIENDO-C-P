#include<stdio.h>
/*NO TIENEN MUCHA UTILIDAD, SALVO QUE PARA
    Transformar variables de 32bit a 64bit
    Simular POO en C
*/
union mi_union {
    int entero;
    float flotante;
};

int main(){
    union mi_union uni;
    uni.entero = 1234567;
    uni.flotante = 2.54E6;
    printf("%i",uni.entero);
    return 0;
}