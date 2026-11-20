#include<stdio.h>

void main(){
    int day;
    printf("enter a day of number:");
    scanf("%d",&day);
    switch(day){
        case 1:
        printf("sunday");
        break;
        case 2:
        printf("monday");
        break;
         case 3:
        printf("tuesday");
        break;
         case 4:
        printf("wedesday");
        break;
         case 5:
        printf("thusday");
        break;
         case 6:
        printf("friday");
        break;
         case 7:
        printf("saturday");
        break;
    default :{
        printf("not valid number give 1 to 7");
    }
    }
}