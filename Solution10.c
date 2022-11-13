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
    int n;
    printf("Find the sum of the series till: ");
    scanf("%d",&n);
    printf("\nSum of the series till %d : %d",n,SumOfSeries(n));
    return 0;
}