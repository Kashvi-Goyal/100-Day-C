#include <stdio.h>

int main() 
{
    int num1, num2,result;
    char op;
    printf("Enter operator=");
    scanf("%d %d %c", &num1, &num2, &op);
    switch (op) 
    {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            if (num2 != 0) 
            {
                result = num1 / num2;
                printf("%d\n", result);
            } 
            else 
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) 
            {
                result = num1 % num2;
                printf("%d\n", result);
            } 
            else 
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }
}