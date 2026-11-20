#include<stdio.h> // sum using array and pointer
void main(){
    int n,i=0,sum=0;
    printf("enter a value of n\n");
    scanf("%d",&n);
    int arr[n];
    int *p=arr;
    printf("enter a element of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum=sum + *(p+i);
    }
    printf("sum=%d",sum);
}