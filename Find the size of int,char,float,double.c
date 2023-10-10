#include<stdio.h>
void main(){
    int a;
    float b;
    char c;
    double d;
    printf("The size of int is %zu bytes",sizeof(a));
    printf("\nThe size of float is %zu bytes",sizeof(b));
    printf("\nThe size of char is %zu bytes",sizeof(c));
    printf("\nThe size of double is %zu bytes",sizeof(d));
}
-------------------------------------------------------------------
Output:
The size of int is 4 bytes
The size of float is 4 bytes
The size of char is 1 bytes
The size of double is 8 bytes
