// add to function using function
#include<stdio.h>
void add(int,int);

void main(){
    int a,b;
    printf("enter a value of a a and b:\n");
    scanf("%d %d",&a,&b);
    add(a,b);
}
void add(int a,int b){
    printf("sum=%d",a+b);
}