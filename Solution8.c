// Write a function to print PASCAL Triangle. (TSRN)

#include <stdio.h>

int GetFactorial(int n){
    int fact=1;
    while(n){
        fact*=n;
        n--;
    }
    return fact;
}

int GetCombination(int n,int r){
    int fact=1,temp=n;
    while(temp>(n-r)){
        fact*=temp;
        temp--;
    }
    int x=fact/GetFactorial(r);
    return x;
}

void PrintPascalTriangle(int rows){
    int k,x;
    for(int i=0;i<rows;i++){
        x=0;
        for(int j=0;j<=rows+i;j++){
            if(j>=rows-i&&k==1){
                printf("%d    ",GetCombination(i,x));
                k=0,x++;
            }
            else{
                printf("     ");
                k=1;
            }
        }
        printf("\n");
    }
}