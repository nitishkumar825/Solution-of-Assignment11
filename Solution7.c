// Write a function to print first N terms of Fibonacci series (TSRN)

#include <stdio.h>

void FibonacciSeries(int n){
    int a=0,b=1,temp=0;
    printf("%d %d ",a,b);
    for(int i=2;i<n;i++){
        temp=a+b;
        printf("%d ",temp);
        a=b;
        b=temp;
    }
}