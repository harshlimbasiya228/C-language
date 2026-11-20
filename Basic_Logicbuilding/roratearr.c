#include<stdio.h>
void rorate(int[],int,int);
void main(){
int n,i,k;
printf("enter a value of n:");
scanf("%d",&n);
int num [n];
printf("enter a element of arry:");
for(i=0;i<n;i++){
    scanf("%d",&num[i]);
}
printf("enter a rotation of nums: ");
scanf("%d",&k);
rorate(num,n,k);
}

void rorate(int num[],int n,int k){
    int temp,i;
    while (k>0)
    {
        temp = num[n-1];
       for(i=n-1;i>0;i--){
            num[i] = num[i-1];
       }
       num[0] = temp;
       k--;
    }
    printf("rorate a array \n");
    for(i=0;i<n;i++){
        printf("%d ",num[i]);
    }
}