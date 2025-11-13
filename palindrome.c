#include <stdio.h>

int main() {
    int n, original_n, reversed_n = 0, remainder;

    printf("Enter the number=");
    scanf("%d", &n);

    original_n = n;
    while (n > 0) 
    {
        remainder = n % 10;
        reversed_n = reversed_n * 10 + remainder;
        
        n /= 10;
    }
    if (original_n == reversed_n) 
    {
        printf("Palindrome\n");
    } else 
    {
        printf("Not palindrome\n");
    }
}
