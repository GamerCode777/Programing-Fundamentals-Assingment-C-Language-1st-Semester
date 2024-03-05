// Question6   Write a Code to check if a Number is Even or Odd.

#include <stdio.h>

int main(void)
{
    int Number, Divisor = 2;

    printf("Enter a Number:");
    scanf("%d", &Number);

    if(Number % Divisor == 0)
    {
        printf("The Number is Even.");
    }
    else
    {
        printf("The Number is Odd.");
    }

    return 0;
}