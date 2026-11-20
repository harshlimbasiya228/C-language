#include<stdio.h>

void main(){
    int n = 5, i,j,num = 1;
    char c = 'A';
    
    for(i=1;i<=n;i++){
        for(j=1;j<=(n-i+1);j++){
            if(i%2==1){
                printf("%d ",num++);
            }else{
                printf("%c ",c++);
            }
        }
        printf("\n");
    }
}