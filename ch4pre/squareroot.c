#include<stdio.h>

void main(){
    int n ,i = 0;
    printf("enter a number n(between 0 to 9):");
    scanf("%d",&n);
    while (i*i<=n)
    {
     i = i+ 1;
    }
    i = i - 1;
    printf("aprox squart root :%d\n",i);
}