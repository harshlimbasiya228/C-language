#include<stdio.h>
void main(){
    int n;
    printf("enter a value of n: ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter a element of a");
    int i,j;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        b[i]=-1;
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                b[i]=a[j];
                break;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}