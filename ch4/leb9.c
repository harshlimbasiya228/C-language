#include<stdio.h>

void main(){
    int n,i=1,sum = 0;
    printf("entera value of number:");
    scanf("%d",&n);
    while(i<=n){
        if(i%2 ==0){
            sum = sum - i;
        }else{
            sum = sum + i;
        }
        i++;
    }
    printf("the sum of serice:%d  %d",n,sum);
}