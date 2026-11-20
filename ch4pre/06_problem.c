#include<stdio.h>

void main(){
    int n,i = 101,count = 0;
    printf("enter a number n:");
    scanf("%d",&n);
while(i<=n){
    if((i % 7 ==0) &&(i % 5 != 0)){
        count = count +1;
        printf("%d\n",i);
    }
    i++;
}
printf("number is /7 but not/5 %d\n",count);
}