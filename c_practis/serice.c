#include<stdio.h>
void main(){
    int n,i=1,temp;
    printf("enter a value of n:");
    scanf("%d",&n);
    for ( i = 1; i < n; i++)
    {
      temp= (i*(i+1))/2;
      printf("%d ",temp);
    }
    
}