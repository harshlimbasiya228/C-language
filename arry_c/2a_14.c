#include<stdio.h>
void main(){
    int n,i,ec=0,oc=0;
    printf("entera value of n:");
    scanf("%d",&n);
    int arry[n];
    printf("entera elementof array:");
    for (i=0;i<n;i++)
    {
       scanf("%d",&arry[i]);
    }
     for (i=0;i<n;i++)
    {
      if(arry[i]%2==0){
         ec++;
      }else{
        oc++;
      }
    }
    printf("even=%d and odd=%d",ec,oc);
}