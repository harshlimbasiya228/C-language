// lcm = (a*b)/gcd
#include<stdio.h>
void main(){
    int n1,n2;
    printf("enter a value of n1 and n2 :");
    scanf("%d %d",&n1,&n2);
    if(n1>0 && n2==0){
        printf("lcm = %d",n1);
    }else if(n1==0 && n2>0){
         printf("lcm = %d",n2);
    }else{
        int max = (n1>n2) ? n1 : n2;
    while (1)
    {
        if(max % n1==0 && max % n2==0){
            printf("lcm = %d ",max);
            break;
        }
        max++;
    }
    }
    // int i,gcd,lcm;
    // for(i=1;i<=a && i<=b;i++){
    //     if(a%i==0 && b%i==0){
    //         gcd=i;
    //     }
    // }
    // lcm = (a*b)/gcd;
    // printf("lcm = %d",lcm);
}