#include<stdio.h>

void main(){
    for( int i= 5;i<10;i++)
    {
        if (i==1){
            break; // exit the loop
        }
        printf("i is %d \n", i);
    }
}