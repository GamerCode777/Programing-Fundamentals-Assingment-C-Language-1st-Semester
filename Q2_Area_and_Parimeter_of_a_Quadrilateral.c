// Question2:   Write a Code To calculate Area and Parimeter of a Rectangle.

#include <stdio.h>

int main(void){

 int Length, Breadth, Area, Parimeter;
printf("Enter Lenght of Rectangle:");
scanf("%d", &Length);
printf("Enter Breadth of Ractangle:");
scanf("%d", &Breadth);

Area = Length*Breadth;

printf("Area of Rectangle is: %d",Area);

Parimeter = Length+Breadth;

printf("\nParameret of Ractangle is: %d",Parimeter);

    return 0;
}