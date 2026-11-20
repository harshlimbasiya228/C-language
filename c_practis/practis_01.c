#include<stdio.h>

void main(){
    int n,i,sum;
    printf("enter a value of n:");
    scanf("%d",&n);
    int s[n],secound,secound_last;
    printf("enter a element of array:\n");
    for (i = 0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    secound=s[1];
    secound_last=s[n-2];
    sum=secound+secound_last;
    printf("secound=%d secound_last=%d",secound,secound_last);
    printf("sum=%d\n",sum);
}