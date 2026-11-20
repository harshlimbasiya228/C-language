#include<stdio.h>

void main(){
    int n,i;
    printf("enter a value of n\n");
    scanf("%d",&n);
    int s[n];
    printf("enter a element of arry\n");
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    printf("normal order arry:\n");
    for(i=0;i<n;i++){
        printf("%d",s[i]);
    }
    printf("reverse order of arry:\n");
    for(i=n-1;i>=0;i--){
        printf("%d",s[i]);
    }
    printf("\n");
}