#include<stdio.h>
void main(){
    int n, i=1,j=1;
     printf("entera value of n:");
    scanf("%d",&n);
   for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
   printf("*");
 }   
  printf("\n");  
}
}