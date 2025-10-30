#include <stdio.h>

int main() 
{
    int num1, num2, var;
    scanf("%d %d", &num1, &num2);

    var = num1;

    num1 = num2;

    num2 = var;
    printf("After swap: %d %d\n", num1, num2);

}