#include<stdio.h>
void power(int,int);
void main(){
    int a,b;
    printf("Enter a value of a and b : ");
    scanf("%d %d",&a,&b);
    power(a,b);
}

void power(int a,int b){
    int result=1,temp,i;
    while (b>0)
    {
        temp=0;
        for ( i = 1; i <= a; i++)
        {
            temp = temp + result;
        }
        result=temp;
        b--;
    }
    printf("Ans : %d",result);
    
}