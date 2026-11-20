#include<stdio.h>  //fibonacci serice print
void main(){
    int n,i=2,a=0,b=1,c;
    printf("enter a value of n:\n");
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(i=2;i<n;i++){
       c=a+b;
       printf(" %d",c);
       a=b;
       b=c;
       
    }
}