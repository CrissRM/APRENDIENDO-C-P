#include<stdio.h>

int main(){
  int num,num_2;

  printf("Ingrese un numero: ");
  scanf("%i",&num);
  printf("Ingrese otro numero: ");
  scanf("%i",&num_2);

  if (num>0){
    printf("El numero es positivo");
  }
  else if (num<0){
    printf("El numero es negativo");
  }
  else{
    printf("El numero es cero");
  }

    switch (num_2 )
    {
    case 1:
        printf("El numero es 1");
        break;
    case 2:
        printf("El numero es 1");
        break;
    case 3:
        printf("El numero es 1");
        break;
    case 4:
        printf("El numero es 1");
        break;
    case 5:
        printf("El numero es 1");
        break;
    default:
        printf("\nEl numero es mayor o igual a 6");
        break;
    }

  return 0;
}