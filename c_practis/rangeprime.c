#include<stdio.h>
void range_pri(int,int);
void range_pri(int n1,int n2){
    int i,j,count;
    for(i=n1;i<=n2;i++){
        count=0;
        for(j=1;j<=i;j++){
            if(i%j == 0){
                count++;
            }
        }
        if(count==2){
            printf("%d ,",i);
        }
    }
}
void main(){
    int n1,n2;
    printf("enter value of n1 : ");
    scanf("%d",&n1);
    printf("enter value of n2 : ");
    scanf("%d",&n2);
    range_pri(n1,n2);
}