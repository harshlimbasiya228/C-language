#include<stdio.h>

void main(){
    int n=1;
    int i=1,j=1;
    char c='A';
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
         if(i%2==0){
            printf("%c ",c);
            c++;
         }else{
            printf("%d ",n);
            n++;
         }
        }
        printf("\n");
    }
    
}