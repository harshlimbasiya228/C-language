#include<stdio.h>

void main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int*ptr =a;
    printf("the value of address %u is %d",ptr+2,*(ptr+2)); // address and value find
}