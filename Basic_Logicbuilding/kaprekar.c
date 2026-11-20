#include<stdio.h>
#include<math.h>

int kaprekar(int n){
    int square,temp,left,right,sum,digit=0;
    int orignal = n;
    if(n>0){
        while(n>0){
            n=n/10;
            digit++;
        }

        square = orignal*orignal;
        temp = pow(10,digit);
        left = square/temp;
        right = square%temp;
        sum = left + right;

        if(sum==orignal){
            return 1;
        }else{
            return 0;
        }
    }else{
        return 0;
    }
}
void main(){
    int n;
    printf("enter a value of n:");
    scanf("%d",&n);
    int temp = kaprekar(n);
    if(temp==1){
        printf("True");
    }else{
        printf("False");
    }
}