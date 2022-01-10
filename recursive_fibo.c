#include <stdio.h>

int fibo(int);

int main(void)
{
    int n, ans;

    printf("\nEnter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        ans = fibo(i);
        printf("%d\n", ans);
    }
}

int fibo(int num)
{
    if (num == 0)
    {
        return 0;
    }

    else if (num == 1)
    {
        return 1;
    }

    else
    {
        return fibo(num - 1) + fibo(num - 2);
    }
}