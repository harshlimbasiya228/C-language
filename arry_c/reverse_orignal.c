#include<stdio.h>
void main(){
    int n,i,temp;
    printf("enter a value of n\n");
    scanf("%d",&n);
    int s[n];
    printf("enter a element of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    // reverse array
    for(i=0;i<n/2;i++){
        temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",s[i]);
    }
}