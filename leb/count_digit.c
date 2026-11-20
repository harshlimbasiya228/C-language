#include<stdio.h>  //count digit in number.

void main(){
    int n,digit_count=0;
    printf("enter a number:");
    scanf("%d",&n);
    if(n==0){
        printf("in your digit only 1 digit");
    }else{
        while(n!=0){
            n=n/10;
            digit_count++;
        }
    }
    printf("digit=%d",digit_count);
}