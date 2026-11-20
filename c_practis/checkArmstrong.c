#include<stdio.h>

void main(){
    int n;
    printf("enter a value of n : ");
    scanf("%d",&n);
    int i,temp,power,result=0,digit,count=0;

    temp=n;
    while (temp>0)
    {
        count++;
        temp=temp/10;
    }
    temp=n;
    while (temp>0)
    {
        digit=temp%10;
        power=1;
        for(i=1;i<=count;i++){
            power=power*digit;
        }
        result=result+power;
        temp=temp/10;
    }
    if(result==n){
        printf("Number is Armstrong");
    }else{
        printf("Number is not Armstrong");
    }
    
    
}