#include<stdio.h>

int main() {
char *str = "Juan";
int x = 5;
short arr[4] = {10, 20, 30, 40};
void* ps[3] = {str, &x, arr};

printf("%s\n",ps[0]);
printf("%d\n",*((int *)ps[1]));
printf("%d\n",   *(((short *) ps[2])+3));


return 0;
}