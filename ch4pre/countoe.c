// print 10 number count odd or even
#include<stdio.h>

void main(){
    int n =10 , i=1,count_odd = 0,count_even = 0;
 
    while(i<=n){

        if(i%2 == 0){
            printf("even number is %d\n",i);
            count_even = count_even + 1;
        }else{
            printf("odd number is %d\n",i);
            count_odd = count_odd + 1;
        }
         i = i+1;
    }
   
    printf(" total odd number= %d\n",count_odd);
    printf(" total odd number =%d\n",count_even);
}