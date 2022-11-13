// Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.

#include <stdio.h>

int GetFactorial(int n){
    int temp=1;
    while(n){
        temp*=n;
        n--;
    }
    return temp;
}

int SumOfSeries(int n){
    int sum=0;
    while(n){
        sum+=(GetFactorial(n)/n);
        n--;
    }
    return sum;
}

int main() 
{
    printf("\nSum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 : %d",SumOfSeries(5));
    return 0;
}