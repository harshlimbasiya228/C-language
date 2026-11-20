#include<stdio.h>
void operation(int,int);
void main(){
    int n1,n2,max,min;
    printf("enter a value of n1 and n2:");
    scanf("%d %d",&n1,&n2);
    operation(n1,n2);
}
void operation(int n1,int n2){
    if(n1>n2){
        printf("max=%d min=%d",n1,n2);
    }if(n1<n2){
        printf("min=%d max=%d",n1,n2);
    }
}