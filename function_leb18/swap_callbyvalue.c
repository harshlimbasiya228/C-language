#include<stdio.h>
void call_value(int,int,int);

void main(){
    int a,b,temp;
    printf("enter a value of a a and b:\n");
    scanf("%d %d",&a,&b);
    call_value(a,b,temp);
}
void call_value(int a,int b,int temp){
    temp=a;
    a=b;
    b=temp;
    printf("a=%d , b=%d",a,b);
}