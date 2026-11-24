#include<stdio.h>

void main(){
    int n,i,currentsum=0;
    printf("enter a value of n:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter a element :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxsum = arr[0];
    for(i=0;i<n;i++){
        currentsum = currentsum + arr[i];
        if(currentsum > maxsum){
            maxsum = currentsum;
        }
        if(currentsum<0){
            currentsum=0;
        }
    }
    printf("largest sum : %d",maxsum);
}