#include<stdio.h>

void main(){
    int a;
    printf("enter a value of a:");
    scanf("%d",&a);
    if((a/2)*2 == a){
        printf("a is even number");
    }else{
        printf("a is odd number");
    }
}
// different way
//end with 0 then number is even and 1 then number is odd 
// if(a & 1){
// printf("odd")}
//else {
// printf("even")}