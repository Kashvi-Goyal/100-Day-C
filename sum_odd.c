#include <stdio.h>

int main() 
{
    // odd_number: to hold the value of the current odd number.
    int i,n,sum = 0;
    int odd_number = 1;
    printf("Enter the value of n =");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        sum += odd_number;
        odd_number += 2;
    }

    printf("%d\n", sum);

}