#include<stdio.h>

void main(){
    int a,b,c;
    printf("enter the value of a,b and c:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c){
        printf("min =%d",a);
    }else if(b<a && b<c){
        printf("min=%d",b);
    }else{
        printf("min=%d",c);
    }
}