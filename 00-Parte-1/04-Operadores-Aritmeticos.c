#include<stdio.h>

int main(){
  int num_1,num_2;
  printf("Indique el valor del primer numero: ");
  scanf("%i",&num_1);
  printf("Indique el valor del segundo numero: ");
  scanf("%i",&num_2);

  printf("La suma es: %i\n",num_1+num_2);
  printf("La resta es: %i\n",num_1-num_2);
  printf("El producto es: %i\n",num_1*num_2);
  printf("La diision es: %i\n",num_1/num_2);
  printf("El resto de la diision es: %i\n",num_1%num_2);
  return 0;
}