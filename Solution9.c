// Write a program in C to find the square of any number using the function.

#include <stdio.h>

int SquareOf(int num){
    return num*num;
}

int main() 
{
    int num,exp;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("\nSquare of %d: %d",num,SquareOf(num));
    return 0;
}