#include <stdio.h>

int main() 
{
    int n, remainder,product = 1; 

    scanf("%d", &n);

    if (n == 0) 
    {
       
    }

    while (n != 0) 
    {
        remainder = n % 10;

        if (remainder % 2 != 0) 
        {
            product *= remainder;
        }
        
        n /= 10;
    }
    printf("%d\n", product);

    return 0;
}