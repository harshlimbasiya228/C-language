#include<stdio.h>
  void main(){
    int n,i;
    printf("entera value of n:");
    scanf("%d",&n);
    int s1[n],s2[n];
    printf("entera value s1 and s2:");
   for (i =0;i<n;i++)
   {
    scanf("%d",&s1[i]);
   }
    for (i=0;i<n;i++)
   {
     s2[i] = s1[i];
   }
   for(i=0;i<n;i++){
      printf("%d ",s2[i]);
   }
  }