#include<stdio.h>

void main(){
    int n,i,count=0;
    printf("enter a value of n");
    scanf("%d",&n);
    int height[n],weight[n];
    printf("enter a element hight:");
    for(i=0;i<n;i++){
        scanf("%d",&height[i]);
    }
     printf("enter a element weight:");
    for(i=0;i<n;i++){
        scanf("%d",&weight[i]);
    }
     for(i=0;i<n;i++){
     if(height[i]>170 && weight[i]<50){
        count++;
     }
    }
     printf("%d",count);
}
