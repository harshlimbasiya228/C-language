// integer number check last digit of the number is odd or even
#include<stdio.h>

void main(){
    int n;
   int lastdigit;
   printf("enter a value od n:");
   scanf("%d",&n);
    if(lastdigit = n/10){
        if(lastdigit % 2 == 0){
            printf("number is even %d",lastdigit);
        }else{
            printf("number is odd %d",lastdigit);
        }
    }
}