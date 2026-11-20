#include<stdio.h>

void main(){
    int i = 5;
    int*j = &i;  // int *J is address of i

    printf("the value of i is %d\n",i);   //*& cut
    printf("the value of i is %d\n",*j);
}