#include<stdio.h>

void main(){
    int n,i,j;
    printf("enter a value of n:");
    scanf("%d",&n);
    int s1[n][n],s2[n][n];
    printf("enter a element in array\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&s1[i][j]);
        }
    }
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           s2[j][i] = s1[i][j];   // Transpose logic: s2[j][i] = s1[i][j]
        }
    }  for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          printf("%d ",s2[i][j]);
        }
    }
    printf("\n");
    
}