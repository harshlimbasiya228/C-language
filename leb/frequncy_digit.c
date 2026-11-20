//count frequncy of digit
#include<stdio.h>

void main(){
    int n,temp,i;
    printf("enter a value of n:");
    scanf("%d",&n);
    int freq[10]={0};
   while(n>0){
    temp=n%10;
    freq[temp]++;
    n=n/10;
   }
   printf("enter a digit to find frequncy:\n");
   for (i= 0;i<10;i++)
   {
    if(freq[i]>0){
   printf("digit=%d time=%d\n",i,freq[i]);
   }
}
        }