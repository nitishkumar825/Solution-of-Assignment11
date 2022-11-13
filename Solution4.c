// Write a function to find the next prime number of a given number. (TSRS)

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

int NextPrimeNumber(int n){
    int temp=++n;
    while(temp){
        if(PrimeOrNot(temp))
            break;
        else
            temp++;
    }
    return temp;
}