#include<stdio.h>

void main(){
    int num,orignal,rem,sum=0;
    printf("enter a num:\n");
    scanf("%d",&num);
    orignal=num;
    while(num>0){
        rem=num%10;
        sum=sum+(rem*rem*rem);  // 153 = 1^3 + 5^3 +3^3=153 is armstrong num 
        num=num/10;
    }
    if(sum==orignal){
        printf("%d is a armstrong number",orignal);
    }else{
        printf("%d is not armstrong number",orignal);
    }
}