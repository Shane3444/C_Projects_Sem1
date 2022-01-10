#include <stdio.h>

int main(void)
{
    int a, b, c, n;

    printf("\nEnter the number of terms: ");
    scanf("%d", &n);

    a = 0;
    b = 1;

    printf("%d\n%d\n", a, b);
    
    for (int i = 0; i < (n-2); i++)
    {   
        c = a + b;
        printf("%d\n", c);

        a = b;
        b = c;
    }
}
