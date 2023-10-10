#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the value of a and b : ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Before swpping a = %d and b = %d",b,a);
    printf("\nAfter swapping a = %d and b = %d",a,b);
}
--------------------------------------------------------
Output:
Enter the value of a and b : 4 5
Before swpping a = 4 and b = 5
After swapping a = 5 and b = 4
