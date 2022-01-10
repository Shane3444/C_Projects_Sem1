#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, d, sum_a, sum_g, nth_a, nth_g;
    int r, n;

    printf("\nEnter the first term of A.P / G.P: ");
    scanf("%f", &a);
    
    printf("Enter the common difference(A.P): ");
    scanf("%f", &d);

    printf("Enter the common ratio(G.P): ");
    scanf("%d", &r);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    nth_a = a + (n - 1) * d;
    nth_g = a * (pow(r,n-1));
    sum_a = (n/2) * (a + nth_a);
    
    if (r > 1)
    {
        sum_g = a * (pow(r,n) - 1) / (r - 1);
    }

    else
    {
        sum_g = a * (1 - pow(r,n)) / (1 - r);
    }

    printf("\nNth Term of A.P: %f\n", nth_a);
    printf("Nth Term of G.P: %f\n", nth_g);
    printf("Sum of A.P upto nth term: %f\n", sum_a);
    printf("Sum of G.P upto nth term: %f\n", sum_g);
    
}