#include<stdio.h>
void main(){
    int i,j,k;
    char c='A';

for(i=1;i<=5;i++){
    for(k=1;k<i;k++){
        printf(" ");
    }
    for(j=5;j>=i;j--){
        if(j%2==0){
        printf("* ");
        }else{
            printf("%c ",c++);
        }
    }
    printf("\n");
} 
}