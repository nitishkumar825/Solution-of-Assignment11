// Write a function to calculate HCF of two numbers. (TSRS)

#include <stdio.h>

int FindHCF(int a,int b){
    int l=a<b?a:b;
    int i=l;
    while(i>1){
        if(a%i==0&&b%i==0)
            break;
        else
            i--;
    }
    return i;
}