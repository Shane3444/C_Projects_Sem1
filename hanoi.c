#include <stdio.h>

void hanoi(int num, int start, int aux, int end);


int main(void)
{
    int n, result;

    printf("Enter No. of disks: ");
    scanf("%d", &n);
    hanoi(n, 1, 2, 3);

}

void hanoi(int n, int start, int aux, int end)
{
    if (n == 1)
    {
        printf("Disk %d : Tower %d -> Tower %d\n", n, start, end);
    }

    else 
    {
        hanoi(n - 1, start, end, aux);
        printf("Disk %d : Tower %d -> Tower %d\n", n, start, end);
        hanoi(n - 1, aux, start, end);
    }
}