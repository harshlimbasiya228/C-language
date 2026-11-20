#include<stdio.h>  // search element in array
void main(){
    int n,i,flag,found=0;
    printf("enter a value of n:");
    scanf("%d",&n);
    int s1[n];
    printf("eneer a element of array:");
    for(i=0;i<n;i++){
        scanf("%d",&s1[i]);
    }
    printf("enter a found element:\n");
    scanf("%d",&flag);
    for(i=0;i<n;i++){
        if(s1[i]==flag){
            found=1;
            break;
        }
    }
    if(found==1){
        printf("element is found\n");
    }else{
        printf("element is not found\n");
    }
}