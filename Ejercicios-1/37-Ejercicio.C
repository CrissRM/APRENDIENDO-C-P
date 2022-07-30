/*
Contar la cantidad de letras de un telegrama que termina en punto sin utilizar
funciones de string, salvo la que indica la longitud
*/
#include <stdio.h>
#include <string.h>

int main()
{

    char telegrama[] = "Contar la cantidad de letras de un telegrama que termina en punto sin utilizar funciones de string, salvo la que indica la longitud.";
    int cant = 0, index = 0;

    while ((index < strlen(telegrama)) && telegrama[index] != 46)
    {
        if ((telegrama[index] >= 65 && telegrama[index] <= 90) || (telegrama[index] >= 97 && telegrama[index] <= 122) || (telegrama[index] >= 128 && telegrama[index] <= 154) || (telegrama[index] >= 160 && telegrama[index] <= 165) || (telegrama[index] >= 208 && telegrama[index] <= 216) || (telegrama[index] >= 224 && telegrama[index] <= 237))
            cant++;
        index++;
    }

    printf("Cantidad de letras %d", cant);

    return 0;
}
