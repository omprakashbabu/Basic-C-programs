#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the values of a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);
    int greatest = (a > b && a > c) ? a : (b > c) ? b : c;//use this line to make it simple
    //Meaning buddy
    /*
    (a>b && a>c) ? a --checks if true then a is greatest  
    : (b > c) ? b : c; --exactly like the prev method om checks true then b is greatest if the both conditions are false c is greatest 
    */
    if (greatest == a) {
        printf("A is the greatest number\n");
    } else if (greatest == b) {
        printf("B is the greatest number\n");
    } else if (greatest == c) {
        printf("C is the greatest number\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
}

/* OUTPUT

Enter value of a, b, and c: 5,9,11
C is the greatest member

*/
