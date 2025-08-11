#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int num, *arr, i; 
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    for(i = num-1; i>=0;--i)//using for loop to reverse the array
        printf("%d ", *(arr + i)); 
    return 0;
}
/* OUTPUT
5
1 3 4 5 6
6 5 4 3 1 
*/
