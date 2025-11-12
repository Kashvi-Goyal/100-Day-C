#include <stdio.h>

int main() 
{
    int n, i, product=1;

    printf("Enter n=");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) 
    {
        product *= i;
    }

    printf("%d\n", product);
}