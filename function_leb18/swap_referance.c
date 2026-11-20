#include<stdio.h>
void call_referance(int,int,int);

void main(){
    int a,b,temp;
    printf("enter a value of a a and b:\n");
    scanf("%d %d",&a,&b);
    call_referance(a,b,temp);
}
void call_referance(int c,int e,int temp){
    int *p=&c;
    int *q=&e;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("c=%d e=%d",c,e);
}