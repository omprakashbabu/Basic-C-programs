#include<stdio.h>
void main(){
    int a,b,temp;
    printf("Enter the value of a and b : ");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("Before swpping a = %d and b = %d",b,a);
    printf("\nAfter swapping a = %d and b = %d",a,b);
}
-------------------------------------------------------
Output:
Enter the value of a and b : 6 3
Before swpping a = 6 and b = 3
After swapping a = 3 and b = 6
