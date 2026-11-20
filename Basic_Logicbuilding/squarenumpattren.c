#include<stdio.h>
#include<stdlib.h>
void main(){
    int n=4;
    int i,j;
    int size = (2*n)-1;
    // for(i=1;i<=size;i++){
    //     for(j=1;j<=size;j++){
    //         int top=i-1;
    //         int left=j-1;
    //         int bottom=size-i;
    //         int right=size-j;
    //         int min=top;
    //         if(left<min){
    //             min=left;
    //         } 
    //         if(bottom<min){
    //             min=bottom;
    //         }
    //         if(right<min){
    //             min=right;
    //         }
    //         int num=n-min;
    //         printf("%d ",num);
    //     }
    //     printf("\n");
    // }

    for(i=1;i<=size;i++){
        for(j=1;j<size;j++){
            int dis_i = abs(i-n);
            int dis_j = abs(j-n);
            int max_dis = dis_i>dis_j ? dis_i : dis_j;
            printf("%d ",max_dis+1);
        }
        printf("\n");
    }
}