#include<stdio.h>

void main(){
   int avg,mark1,mark2,mark3;
   printf("enter a value of mark1,mark2,mark3\n");
   scanf("%d %d %d",&mark1,mark2,mark3);
   avg = (mark1+mark2+mark3)/3;
   if(avg>=90){
      printf("a grad in this sem");
   }else if(avg>=80){
      printf("b grad in this sem");
   }else if(avg >= 60){
      printf("c grad in this sem");
   }else if (avg>=40){
      printf("d grad in this sem");
   }else{
      printf("fail in this sem");
   }
}
