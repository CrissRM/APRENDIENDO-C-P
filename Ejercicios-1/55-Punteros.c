/*
Complete el siguiente código de modo que los datos de names1 se transfieran a names2. Luego imprimir los nombres mostrados desde names2

int main(void) {
char *names1[3] = {"Ana", "Liv", "Katty"};
char names2[3][10];

Escribir su código debajo de esta línea 
*/

#include<stdio.h>
#include<string.h>

int main() {
    char *names1[3] = {"Ana", "Liv", "Katty"};
    char names2[3][10];

    for (int i=0;i<3;i++){
        strcpy(names2[i],names1[i]);
        printf("%s\n",names2[i]);
    }

    return 0;
}
