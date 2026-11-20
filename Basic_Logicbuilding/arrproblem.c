#include<stdio.h>

void main(){
    int n;
    printf("enter value of n:\n");
    scanf("%d",&n);
    int temp1,temp2,count=0,i,j;
    int A[n];
    printf("enter a element of array");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<n-1;i++){
        if(A[i]<=A[i+1]){
            temp1=1;
        }else{
            temp1=0;
            break;
        }
    }
    for(j=0;j<n-1;j++){
        if(A[j]==A[j+1]){
            count++;
        }else{
            count=1;
        }
        if(count>=3){
                temp2=1;
            }
    }
    printf("Output :\n");
    if(temp1==1 && temp2==1){
        printf("True");
    }else{
        printf("False");
    }
}