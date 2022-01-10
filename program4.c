#include <stdio.h>

int main(void)
{
    int a;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    if (a != 0)
    {
        if (a > 0)
        {
            printf("a is +ve");
        }

        else
        {
            printf("a is -ve");
        }
    }

    else
    {
        printf("a is neither +ve or -ve");
    }
}