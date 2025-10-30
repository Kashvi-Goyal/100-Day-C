#include <stdio.h>

int main()
 {
    float celsius, fahrenheit;
    printf("Enter temperature=");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("Fahrenheit=%f\n", fahrenheit);

}