#include<stdio.h>

struct Distance{
    int inches;
    int feet;
};
void main(){
    struct Distance d1,d2,result;
    printf("enter a firest distance\n");
    printf("enter a feet\n");
    scanf("%d",&d1.feet);
    printf("enter a inches\n");
    scanf("%d",&d1.inches);
    printf("enter a secound distance\n");
    printf("enter a feet\n");
    scanf("%d",&d2.feet);
    printf("enter a inches\n");
    scanf("%d",&d2.inches);
   
    result.feet = d1.feet+d2.feet;
     result.inches = d1.inches+d2.inches;
     if(12>result.inches){
       result.feet+=result.inches/12;
       result.inches = result.inches%12;
     }
     printf("result=%d result=%d",result.feet,result.inches);
}
