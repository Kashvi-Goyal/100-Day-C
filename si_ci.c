#include <stdio.h>
#include <math.h> // Required for the pow() function

int main()
 {
    float principal, rate, time, simple_interest, compound_interest;

    printf("Enter principal, rate and time=");
    scanf("%f %f %f", &principal, &rate, &time);

    simple_interest = (principal * rate * time) / 100.0;

    float amount = principal * pow((1 + rate / 100.0), time);
    compound_interest = amount - principal;

    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simple_interest, compound_interest);
 }