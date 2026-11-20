#include<stdio.h>

void main(){
    int product = 1;
    int n = 7;

    // factorial meaning :
    // 7! = 7*6*5*4*3*2*1 = 5040
    // 0! = 1

    for(int i = 1; i<=n; i++) // the run inside the loop
    {
        product *= i;
    }
    {
        printf("the factorial is %d",product); // clear the output
    }
}