/*
Se quiere escribir un programa para manipular polinomios. Para ello, vamos a atilizar una estructura de datos como la siguiente:
typedef struct{
    int grado; --> grado de1 polinomio
    float *coef; --> coeficientes del polinomio
}tpolinomio;

Se pide:
a.- Escribir una función LeerPol que lea a través del teclado un polinomio y lo
almacene en una estructura de tipo tpolinomio anteriormente descrita. La
función LeerPol devolverá el polinomio leído. Para el polinomio anterior la
entrada de datos se efectuaría así:
Grado del polinomio: 5
Coeficientes de mayor a menor grado: 1 0 5 -1 0 4
El prototipo de la función es el siguiente:
    Lpolinomio LeerPol (void) ;

b.- Escribir una función VisualizarPol que visualice en pantalla un polinomio.
Por ejemplo, el polinomio anterior sería visualizado así:
+1x^5 +5x^3 -1x^2 +4
El prototipo de la función es el siguiente:
    void VisualizarPol (tpolinomio pol) ;
El parámetro pol es una esfuctura que especifica el polinomio a visualizar.

c.- Escribir una función SumarPols que devuelva como resultado la suma de dos
polinomios. El prototipo de esta función es:
    tpolinomio SumarPols(tpolinomio pol A, tpolinomio polB);
Los parámetros polA y polB son estructuras que especifican los polinomios a
sumar

d.- Utilizando las funciones anteriores, escribir un programa que lea dos polinomios y visualice en pantalla su suma

*/

#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int grado;
    float *coef;
} polinomio;

polinomio LeerPol (void) ;
void VisualizarPol (polinomio pol) ;
polinomio SumarPols(polinomio polA, polinomio polB);

int main(void){
    polinomio polA = LeerPol();
    polinomio polB = LeerPol();
    polinomio suma = SumarPols(polA,polB);
    VisualizarPol(polA);
    VisualizarPol(polB);
    VisualizarPol(suma);
    free(polA.coef);
    free(polB.coef);
    free(suma.coef);

}

polinomio LeerPol(void){
    polinomio poli;
    int coef;
    puts("\nGrado del polinomio");
    fflush(stdout);
    scanf("%d",&poli.grado);
    puts("Coeficientes de mayor a menor grado: ");
    fflush(stdout);
    poli.coef =(float*) malloc((poli.grado+1)*sizeof(polinomio));
    
    if (poli.coef == NULL){
        puts("No hay memoria suficiente");
        exit(-1);
    }
    for (int i = poli.grado; i >=0 ; i--){
        printf("Coeficiente de grado %i: ",i);
        fflush(stdout);
        scanf("%f",&poli.coef[i]);
    }
    return poli;
}

void VisualizarPol (polinomio pol) {
    printf("\nPolinomio: ");
    for (int i=pol.grado;i>=0;i--){
        if (*(pol.coef+i) >0){
            if (i ==0)
                printf("+%.2f ",*(pol.coef+i));
            else
                printf("+%.2f x^%i ",*(pol.coef+i),i);
        }
        else if (*(pol.coef+i) < 0){
            if (i ==0)
                printf("%.2f",*(pol.coef+i));
            else
                printf("%.2f x^%i ",*(pol.coef+i),i);
        }
        
    }
    puts("\n");
}

polinomio SumarPols(polinomio polA, polinomio polB){
    polinomio polC;
    if (polA.grado <= polB.grado){
        polC.grado = polB.grado;
        polC.coef = (float*)malloc(polC.grado*sizeof(polinomio));
        for (int i=polA.grado;i>=0;i--)
            polC.coef[i] = polA.coef[i] + polB.coef[i];
        for (int i=polB.grado;i>polA.grado;i--)
            polC.coef[i] =  polB.coef[i];
    }
    else{
        polC.grado = polA.grado;
        polC.coef = (float*)malloc(polC.grado*sizeof(polinomio));
        for (int i=polB.grado;i>=0;i--)
            polC.coef[i] = polA.coef[i] + polB.coef[i];
        for (int i=polA.grado;i>polB.grado;i--)
            polC.coef[i] =  polA.coef[i];
    }

    return polC;
}
