#include<stdio.h>

void main(){
    int i = 7;
    int* ptr1 = &i; // &i is address of i
    int** ptr2 = &ptr1;
    printf("the address of i is %u\n",&i);
    printf("the value of i is %d\n",ptr1);
}