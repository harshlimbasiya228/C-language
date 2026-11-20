#include<stdio.h>

void main(){
    char a='A',b='a',i=1;
    int n;
    printf("enter a number of alphabate:");
    scanf("%d",&n);
   while (i<=n)
   {
    printf("%c ",a++);
    printf("%c ",b++);
    i++;
   }
}