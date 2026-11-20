#include<stdio.h>
void main(){
    int n,i,max,min,sum=0;
    float avg;
    printf("enter value of n:");
    scanf("%d",&n);
    int s[n];
    printf("enter a element:");
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    max=min=s[0];
    for(i=0;i<n;i++){
       if(s[i]>max){
        max=s[i];
       }
       if(s[i]<min){
        min=s[i];
       }
       sum=sum+s[i];
       avg= (float)sum/n;
    }
    printf("max=%d,min= %d\n",max,min);
    printf("sum=%d\n",sum);
    printf("avg=%.2f\n",avg);
}