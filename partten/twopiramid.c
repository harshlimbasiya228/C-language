#include<stdio.h>

void main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        for(k=1;k<i;k++){
            printf(" ");
        }
        for(j=5;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=4;i++){
        for(k=4;k>i;k--){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}