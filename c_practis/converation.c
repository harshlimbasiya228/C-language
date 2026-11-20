#include<stdio.h>  //decimal to binaty.
void main(){
    int n,i=0,binary[32],j;
    printf("enter a decimal value of n:");
    scanf("%d",&n);

    if(n==0){
        printf("binary=0\n");
    }
   while (n>0)
   {
   binary[i] = n%2;  
   n=n/2;          // reaveres arry use 
   i++;
   }
   for(j=i-1;j>=0;j--){
    printf("%d",binary[j]);
   }
   printf("\n");
}