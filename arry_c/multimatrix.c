#include<stdio.h>
void main(){
    int i,j,k,sum=0;
    int a[3][3],b[3][3],result[3][3];
    printf("enter a element in first matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter a element in secound matrix\n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=0;
        for(k=0;k<3;k++){
          sum = sum + a[i][k]*b[k][j];  // logic of multi of matrix =sum+a[i][k]*b[k][j]
          result[i][j]=sum;
         
        }
        printf("%d ",result[i][j]);
    }
     printf("\n");
}
}