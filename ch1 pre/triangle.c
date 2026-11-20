#include<stdio.h>

void main(){
    float base,hight,area;
    printf("enter a value of base");
    scanf("%f",&base);
    printf("enter a value of hight");
    scanf("%f",&hight);
    area = 0.5 * base * hight; 
    printf("the area of triangle is %f\n",area);
}