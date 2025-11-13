#include <stdio.h>

int main() 
{
    int n, i, is_prime = 1; //considering input number is a prime number

    printf("Input the number=");
    scanf("%d", &n);

    if (n <= 1) 
    {
        is_prime = 0; // assumption is wrong
    } 
    else 
    {
        for (i = 2; i * i <= n; i++) +
        {
            if (n % i == 0) 
            {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime == 1) 
    {
        printf("Prime\n");
    } 
    else 
    {
        printf("Not prime\n");
    }

}