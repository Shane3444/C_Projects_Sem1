#include <stdio.h>

int main(void)
{
    int a;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("a is Even");
    }

    else
    {
        printf("a is Odd");
    }
}