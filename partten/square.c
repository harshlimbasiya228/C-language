#include<stdio.h>

void main(){
 int n=5,i,j;
    for(i=1;i<=n;i++){// holw square
        for(j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n){  // if under logic i =1 print * in top
                printf("* ");                  // i=2 and j=1 to j=5 print only star at side
            }else{                             // i=5print star in bottem
                printf("  ");
            }
       }
        printf("\n");
    }
}
  // int n=4,i,j; // square
   //for(i=1;i<=n;i++){
    //for(j=4;j>=1;j--){
      //  printf("* ");
   // }
    //printf("\n");
   //}
