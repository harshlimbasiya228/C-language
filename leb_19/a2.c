// pass an array in function to print array element
#include<stdio.h>
void  print(int n,int arr[]);  // function declaration
void main(){
    int n;
    printf("enter value of n:\n");
    scanf("%d",&n);
    int arr[n];
    print(n,arr);  // function cll
}
void print(int n,int arr[ ]){    // function defination
    int i;
    printf("enter a element of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}