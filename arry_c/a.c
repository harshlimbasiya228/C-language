#include<stdio.h>

void main(){
    int n , i;
    printf("enter a value :");
    scanf("%d",&n);
    int a[i];
    printf("enter number n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter a normal number:\n",n);
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
    printf("enter a reverse number:\n",n);
    for(i=n-1;i>0;i--){
        printf("%d",a[i]);
    }
}