/*
Mostrar el valor de una variable:
printf("%i",vraiable)

CARACTERES DE FORMATEO: 
    1. %d ó %i  ---> Entero en base 10 con signo
    
    2. %u         --- > Entero en base 10 sin signo
    
    3. %o         --- > Entero en base 8 sin signo
    
    4. %x         --- > Entero en base 16 letrs en minúscula
    
    5. %X         --- > Entero en base 16 letrs en mayúsculas
    
    6. %f         --- > Coma flotante decimal con precisión simple
    
    7. %lf         --- > Coma flotante decimal con precisión doble
    
    8. %e         --- > Notación cientifica (matisa/exponente), minúsculas (decimal precisión simple o doble)

    9. %E         --- > Notación cientifica (matisa/exponente), mayúsculas (decimal precisión simple o doble)

    10. %c        --- > Caracter 

    11. %s         --- > Cadena de caracteres

*/
#include<stdio.h>

int main(){
  int numero = 100;
  printf("%i",numero);
  return 0;
}