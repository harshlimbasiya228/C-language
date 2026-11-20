#include<stdio.h>
void fiboo(int,int,int,int,int);
void main(){
    int n,a=0,b=1,i=0,result;
    printf("enter a value of n:\n");
    scanf("%d",&n);
    fiboo(n,a,b,result,i);
}
void fiboo(int n,int a,int b,int result,int i){
     printf("%d %d ,",a,b);
  for(i=2;i<n;i++){
    result=a+b;
    printf("%d ,",result);
    a=b;
    b=result;
  }
}