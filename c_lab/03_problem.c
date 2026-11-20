#include<stdio.h>

void main(){
    float per;
    printf("enter a per");
    scanf("%f",&per);

    if(per>=71 && per>=80){
        printf("outstanding %2.f",per);
    }else if(per >=61 && per >=70){
       printf("first class %2.f",per); 
    }else if(per >=46 && per >=60){
       printf("secound class %2.f",per); 
    }else if(per >=45 && per >=33){
       printf("third class %2.f",per); 
       }else {
       printf("fail");
       }
}