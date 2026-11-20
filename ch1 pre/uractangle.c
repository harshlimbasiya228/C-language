#include<stdio.h>

int main(){
    int area;
    int l;
    int b;
    printf("please enter value of langh");
    scanf("%d",&l);
    printf("please enter value of width");
    scanf("%d",&b);
    area = l*b;
    printf("area of ractangle %d",area);
    return 0;
}