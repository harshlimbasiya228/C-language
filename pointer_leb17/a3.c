//calculte sum of two number using pointer
#include<stdio.h>
void main(){
    int x,y,sum=0;
    printf("enter a value of x and y:\n");
    scanf("%d %d",&x,&y);
    int *ptr1=&x;
    int *ptr2=&y;
    sum=*(ptr1)+(*(ptr2));
    printf("sum=%d",sum);
}