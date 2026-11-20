#include<stdio.h>

void main(){
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 7*(i+1); 
    }
    for (int i = 0; i < 10; i++)
    {
        printf("the value of 7* %d = %d\n",i+1 ,arr[i]);
    }
} 
// i=0 when arr[i] =7*(0+1)
//out put is 7.