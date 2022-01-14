#include <stdio.h>

int main(void)
{
    int choice;
    float areac, radius, areas, arear, areat, l, b, side, base, height;

    printf("\n1) Area of Square\n2) Area of Rectangle\n3) Area of Triangle\n4) Area of Circle\nEnter your Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        printf("Enter the length of side: ");
        scanf("%f", &side);

        areas = side * side;

        printf("Area: %f", areas);
        break;

        case 2:
        printf("Enter the length: ");
        scanf("%f", &l);
        printf("Enter the width: ");
        scanf("%f", &b);

        arear = l * b;

        printf("Area: %f", arear);
        break;

        case 3:
        printf("Enter the height: ");
        scanf("%f", &height);
        printf("Enter the base: ");
        scanf("%f", &base);

        areat = 0.5 * base * height;

        printf("Area: %f", areat);
        break;

        case 4:
        printf("Enter the radius: ");
        scanf("%f", &radius);

        areac = 3.14 * radius * radius;

        printf("Area: %f", areac);
        break;

        default:
        printf("Incorrect Choice\n");
    } 
}