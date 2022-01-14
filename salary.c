#include <stdio.h>

int main(void)
{
    float base,  hra, da, gross;

    printf("\nInput Base Salary: ");
    scanf("%f", &base);

    if (base <= 10000.0)
    {
        hra = 0.2 * base;
        da = 0.8 * base;

        gross = base + hra + da;

        printf("HRA: %f\nDA: %f\nGross Salary: %f", hra, da, gross);
    }

    else if (base <= 20000.0)
    {
        hra = 0.25 * base;
        da = 0.9 * base;

        gross = base + hra + da;

        printf("HRA: %f\nDA: %f\nGross Salary: %f", hra, da, gross);
    }

    else
    {
        hra = 0.3 * base;
        da = 0.95 * base;

        gross = base + hra + da;

        printf("HRA: %f\nDA: %f\nGross Salary: %f", hra, da, gross);
    }
}