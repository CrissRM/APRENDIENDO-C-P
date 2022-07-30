#include<stdio.h>

int main(){

    unsigned char a = 12;
    unsigned char b= 35;

    printf("a = 12 --> NOT(a) = %u\n",(unsigned char)~a);
    printf("b = 45 --> NOT(b) = %u\n",(unsigned char)~b);
    printf("a = 12 b = 45 -->(a&b) = %u\n",(unsigned char)(a&b));
    printf("a = 12 b = 45 -->(a|b) = %u\n",(unsigned char)(a|b));
    printf("a = 12 b = 45 -->(a^b) = %u\n",(unsigned char)(a^b));
    
    return 0;
}
