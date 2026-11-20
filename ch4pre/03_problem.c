#include<stdio.h>

 void main(){
    int sum = 0;
    int n;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    for(int i=1; i<=10; i++)
    {
      sum += (n*i);
    }
    {
      printf("the sum of the table is n %d" , sum);
    }
    }