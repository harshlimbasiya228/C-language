#include<stdio.h>

void main(){
    int i,j,pc=0,nc=0,zc=0;
    int s[3][3];
    printf("enter a element in array:");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            scanf("%d",&s[i][j]);
        }
    }
     for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
           if(s[i][j]>0){
            pc++;
           }else if(s[i][j]<0){
            nc++;
           }else{
            zc++;
           }
        }
    }
    printf("pc=%d\nnc=%d\nzc=%d\n",pc,nc,zc);
}