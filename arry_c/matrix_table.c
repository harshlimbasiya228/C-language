#include<stdio.h>
void main(){
    int arr[3][10]; // i=0 print 2 muitiplication table / i=1 7 table /i=2 9 table
    int multi[]={2,7,9};
    
    printf("enter a element of arr\n");
    int i=0,j=0;
    for(i=0;i<3;i++){
        for(j=0;j<10;j++){
           arr[i][j]=multi[i]*(j+1);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<10;j++){
         printf("%d\n",arr[i][j]);
        }
    }
}