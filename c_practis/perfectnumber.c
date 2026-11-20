#include<stdio.h>

void main(){
    int n,i=1,sum = 0;
    printf("entera value of n:");
    scanf("%d",&n);

    while(i<=(n-1)){
      if(n%i == 0){
    sum = sum + i;
  }
     i = i + 1;
}
  if(sum == n){
    printf("perfect number");
  }else{
    printf("not perfect number");
  }
    }

