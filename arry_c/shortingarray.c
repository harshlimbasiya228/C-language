#include<stdio.h>

void main(){
    int a[5]={60,70,-20,-10,30};
    int i,j,temp;
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=1;i<5;i++){
        for(j=i+1;j<5;j++){
            printf("%d ",temp);  // output={70,60,30,-10;-20}
        }
    }
}