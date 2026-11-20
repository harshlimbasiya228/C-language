#include<stdio.h> //sum of array even element
 void main(){
    int n,i=0,sum=0;
     printf("enter a value of n:\n");
     scanf("%d",&n);
    int s[n];
     printf("enter a positive element of arr\n");
    for(i=0;i<n;i++){
    scanf("%d",&s[i]);
 }
   for(i=0;i<n;i++){
    if(s[i]%2==0){
        sum=sum+s[i];
    }
 }
 printf("sum=%d",sum);
 }
