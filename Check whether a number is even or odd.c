#include<stdio.h>
void main(){
    int a,b;
    printf("Enter a number : ");
    scanf("%d",&a);
    if(a%2==0){
        printf("It is an even number\n");
    }else{
        printf("It is an odd number\n");
    }
}
-------------------------------------------
Output:
Enter a number : 4
It is an even number

Enter a number : 5
It is an odd number
