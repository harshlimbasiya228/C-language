//swap value of two number using pointer
#include<stdio.h>
void main(){
int a,b,temp;
 printf("enter a value of a and b:\n");
 scanf("%d %d",&a,&b);
 int *p=&a;
 int *q=&b;
 temp=*p;
 *p=*q;
 *q=temp;
 printf("a=%d b=%d\n",a,b);
}