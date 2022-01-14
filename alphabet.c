#include <stdio.h>

int main(void)
{
    char A;
    
    printf("Enter an alphabet(Uppercase): ");
    scanf("%c", &A);

    if (A == 'A' || A == 'E' || A == 'I' || A == 'O' || A == 'U')
    {
        printf("The alphabet is a vowel.");
    }

    else
    {
        printf("The alphabet is a consonant.");
    }
}