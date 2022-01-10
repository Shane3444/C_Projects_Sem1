#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("a is the largest number");
        }

        else
        {
            printf("c is the largest number");
        }
    }

    else
    {
        if (b > c)
        {
            printf("b is the largest number");
        }

        else
        {
            printf("c is the largest number");
        }
    }
}