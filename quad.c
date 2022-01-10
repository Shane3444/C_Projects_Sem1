#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c, determinant;
    float root1, root2;

    printf("\nEnter the coefficient of x^2: ");
    scanf("%d", &a);
    
    printf("Enter the coefficient of x: ");
    scanf("%d", &b);
    
    printf("Enter the constant: ");
    scanf("%d", &c);

    printf("\nThe Quadratic Equation is : (%d)x^2 + (%d)x + (%d)\n\n", a, b, c);

    determinant = pow(b, 2) - (4 * a * c);

    if (determinant == 0)
    {
        root1 = (-b + sqrt(determinant)) / (2 * a);
        root2 = root1;

        printf("Root 1 : %f\nRoot 2 : %f", root1, root2); 
    }

    else if (determinant > 0) 
    {
        root1 = (-b + sqrt(determinant)) / (2 * a);
        root2 = (-b - sqrt(determinant)) / (2 * a);

        printf("Root 1 : %f\nRoot 2 : %f", root1, root2); 
    }

    else
    {
        root1 = (-b + sqrt(-determinant)) / (2 * a);
        root2 = (-b - sqrt(-determinant)) / (2 * a);

        printf("Root 1 : %f * i\nRoot2 : %f * i", root1, root2);
    }
}