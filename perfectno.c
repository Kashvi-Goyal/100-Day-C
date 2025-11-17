#include <stdio.h>

int main() 
{
    int n, i;
    int sum_of_factors = 0;
    scanf("%d", &n);

    for (i = 1; i <= n / 2; i++) 
    {
        if (n % i == 0) 
        {
            sum_of_factors += i;
        }
    }

    if (n > 0 && sum_of_factors == n) 
    {
        printf("Perfect number\n");
    } 
    else 
    {
        printf("Not perfect number\n");
    }
    return 0;
}