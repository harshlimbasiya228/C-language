#include<stdio.h>

void main(){
    int n=5,i=1,j=1,k;
    char alphabate = 'A';
    for(i=1;i<=n;i++){
        for(k=5;k>i;k--){
            printf(" ");
        }
        if(i%2!=0){
            for(j=1;j<=i;j++){
                printf("%d ",j);
            }
        }else{
            for(j=1;j<=i;j++){
                printf("%c ",alphabate);
                alphabate++;
            }
        }
        printf("\n");
    }
    
}