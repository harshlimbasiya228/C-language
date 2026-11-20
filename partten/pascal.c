#include<stdio.h>

void main(){
   // int i,j,num;
    int n=5;
   // for(i=0;i<n;i++){
       // for(j=0;j<n-i;j++){
        //    printf(" ");
     //   }
      //  num=1;
      //  for(j=0;j<=i;j++){
       //     printf("%d ",num);
         //   num=num*(i-j)/(j+1);
      //  }
      //   printf("\n");
  //  }
  int i,j,k;
  for(i=0;i<n;i++){
    int num=1;
    for(k=5;k>i;k--){
        printf(" ");
    }
    for(j=0;j<=i;j++){
        printf("%d ",num);
        num=num * (i-j)/(j+1);
    }
    printf("\n");
  }
}
