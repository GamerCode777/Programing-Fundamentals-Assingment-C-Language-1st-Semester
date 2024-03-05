// Question8   Write a code to check the largest number of Two Numbers.

#include <stdio.h>

int main (void)
{
    int Number1, Number2;

    printf("Enter 1st Number:");
    scanf("%d", &Number1);
    printf("Enter 2nd Number:");
    scanf("%d", &Number2);

    if(Number1==Number2)
    {
        printf("Both Numbers are Equal.");

        return 0;
    }

    if(Number1>Number2)
    {
        printf("Number1 is Large.");
    }
    else
    {
        printf("Number2 is Large.");
    }

    return 0;
}