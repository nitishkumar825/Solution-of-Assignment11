// Write a function to print all Prime numbers between two given numbers. (TSRN)

#include <stdio.h>
#include <math.h>

int PrimeOrNot(int a){
    int count=0;
    if(a!=2&&a%2==0){
        count=1;
    }
    else{
        int x=(int)sqrt(a);
        for(int i=2;i<=x;i++){
            if(a%i==0){
                count++;
                break;
            }
        }
    }
    if(count==0)
        return 1;
    else
        return 0;
}

void AllPrimeNumbersBetween(int s,int e){
    for(int i=s;i<=e;i++)
        if(PrimeOrNot(i))
            printf("%d ",i);
}