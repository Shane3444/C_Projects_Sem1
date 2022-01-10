#include <stdio.h>

int main(void)
{
    float a, b, sum, product, subtract, quotient;

    printf("Enter the value of A: ");
    scanf("%f", &a);
    
    printf("Enter the value of B: ");
    scanf("%f", &b);

    sum = a + b;
    subtract = a - b;
    product = a * b;
    quotient = a / b;
    
    printf("A + B: %f\n", sum);
    printf("A - B: %f\n", subtract);
    printf("A * B: %f\n", product);
    printf("A / B: %f\n", quotient);
}