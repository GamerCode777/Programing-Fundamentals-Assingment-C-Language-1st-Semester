// Question5   Write a code to check wheather a number is prime number or not.

#include <stdio.h>

int main(void)
{
    int Number, i, Count = 0;

    printf("Enter a Number: ");
    scanf("%d", &Number);

    if (Number <= 1)
    {
        printf("Number is not Prime.");
    }
    else
    {
        for (i = 1; i <= Number; i++)
        {
            if (Number % i == 0)
            {
                Count++;
            }
        }

        if (Count == 2)
        {
            printf("is Prime Number.");
        } else
        {
            printf("Not Prime Number.");
        }
    }

    return 0;
}