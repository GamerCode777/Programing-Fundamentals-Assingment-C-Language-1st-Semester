// Question3:   Write a Code that find cube of the value of a number.

#include <stdio.h>

int main(void){

int Number, Cube;

printf("Enter a Number:");
scanf("%d", &Number);

Cube = Number*Number*Number;

printf("Cube of This Number is:%d", Cube);

    return 0;
}