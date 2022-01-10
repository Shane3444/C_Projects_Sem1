#include <stdio.h>

int main(void)
{
    int num, temp, factorial;

    printf("\nEnter the number: ");
    scanf("%d", &num);

    factorial = 1;
    temp = num;

    if (num > 1 )
    {
        for (int i = 0; i < num; i++)
        {
            factorial = factorial * temp;
            temp = temp - 1;
        }

        printf("%d is the factorial of %d", factorial, num);
    }

    else if (num == 0 || num == 1)
    {
        printf("%d is the factorial of %d", factorial, num);
    }

    else
    {
        printf("Invalid Input");
    }
}