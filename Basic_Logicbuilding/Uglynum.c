#include<stdio.h>
int Ugly(int);
int Uglu_num(int);
int Ugly(int n){
    if(n>0){
        while(n%2==0){
            n=n/2;
        }
         while(n%3==0){
            n=n/3;
        }
         while(n%5==0){
            n=n/5;
        }
        if(n==1){
            return 1;
        }else{
            return 0;
        }
    }
}
void main(){
    int n;
    printf("enter a value of n:");
    scanf("%d",&n);
    int temp = Ugly(n);
    if(temp==1){
        printf("True");
    }else{
        printf("False");
    }
    printf("\n");
    int temp1 = Uglu_num(n);
    if(temp1==1){
        printf("True");
    }else{
        printf("False");
    }
}
// secound way to find ugly number

int Uglu_num(int n){
    int i=2,j=0;
    while (n>0)
    {
        if(n%i==0){
            n=n/i;
        }else{
            j++;
            i=i+j;
        }
        if(i>5){
            break;
        }
    }
    if(n==1){
        return 1;
    }else{
        return 0;
    }
    
}