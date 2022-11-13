// Write a function to calculate LCM of two numbers. (TSRS)

#include <stdio.h>

int FindLCM(int a,int b){
    int i=a>b?a:b;
    while(i<=a*b){
        if(i%a==0&&i%b==0)
            break;
        else
            i=i+(a>b?a:b);
    }
    return i;
}