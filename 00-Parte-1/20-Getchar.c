#include <stdio.h>

#define N_ELEMENTOS 'z'-'a'+1 /* número de elementos */
void main( ) {
    int c[N_ELEMENTOS] = {0}; /* array c */
    char car; 
    
    /* Entrada de datos y cá1cu1o de la tabla de frecuencias */
    printf("Introducir texto. Para fínalizar introducir la rnarca EOF\n\n");
    fflush(stdout);

    while ((car = getchar()) != '\n') {
        if (car >= 'a' && car <= 'z')
            c[car - 'a']++;
    }

    
    for (car = 'a';car <= 'z'; car++)
        if (c[car-'a'] !=0)
            printf("%c %3d\n",car, c[car -'a']) ;

}