#include<stdio.h>

int main(){
  int num1 = 10,num2 = 100,num3 =10;

  printf("Comparacion: 10 == 100 ?\n",num1==num2);
  printf("Comparacion: 10 >= 100 ?\n",num1>=num2);
  printf("Comparacion: 10 <= 100 ?\n",num1<=num2);
  printf("Comparacion: 10 != 100 ?\n",num1!=num2);
  printf("Comparacion: 10 < 100 ?\n",num1<num2);
  printf("Comparacion: 10 > 100 ?\n",num1>num2);
  printf("Comparacion: 10 == 10 ?\n",num1==num3);
  printf("Comparacion: 10 < 10 ?\n",num1<num3);
  printf("Comparacion: 10 > 10 ?\n",num1>num3);
  printf("Comparacion: 10 >= 10 ?\n",num1>=num3);
  printf("Comparacion: 10 <= 10 ?\n",num1<=num3);
  return 0;
}