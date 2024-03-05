/* Question6   Write a Code to check your Grade of your Percentage.
                Below 50% F Grade.
                50%-----59% D Grade.
                60%-----69% C Grade.
                70%-----79% B Grade.
                80%-----89% A Grade.
*/

#include <stdio.h>

int main(void)
{

    int Percentage;

    printf("Enter Your Percentage:");
    scanf("%d", &Percentage);

    if(Percentage >=80)
    {
        printf("A Grade.");
    }
    else
    {
        if(Percentage >=70)
        {
            printf("B Grade.");
        }
        else
        {
            if(Percentage >=60)
            {
                printf("C Grade.");
            }
            else
            {
                if(Percentage >=50)
                {
                    printf("D Grade.");
                }
                else
                {
                    if(Percentage <=49)
                    {
                        printf("F Grade.");
                    }
                    
                }
            }
        }
    }
    return 0;
}