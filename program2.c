#include <stdio.h>

int main(void)
{
    float x, y, z, a, b, c, ans;
    
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);
    
    printf("Equation: %f * x + %f * y + %f * z\n", a, b, c);
    
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);
    printf("Enter the value of z: ");
    scanf("%f", &z);
    
    ans = a * x + b * y + c * z;
    
    printf("Answer: %f", ans);
}
