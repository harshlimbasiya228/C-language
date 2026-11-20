//print value of address
#include<stdio.h>
void main(){
    int n;
    printf("enter a value:");
    scanf("%d",&n);
    int *ptr=&n;
    printf("%d %d\n",n,ptr);

}