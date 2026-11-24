#include<stdio.h>

void main(){
    int n,i,j;
    printf("enter n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<n;j++){
            if(j<=i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        for(j=1;j<=2*(n-i);j++){
            printf(" ");
        }
        for(j=1;j<=n;j++){
            if(j<=i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<n;j++){
            if(j<=i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        for(j=1;j<=2*(n-i);j++){
                printf(" "); 
        }
        for(j=1;j<=n;j++){
            if(j<=i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}