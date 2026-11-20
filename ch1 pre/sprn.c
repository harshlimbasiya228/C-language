#include<stdio.h>
void main(){
    int ammount;
    float rate;
    int noy;
    float ans;
    printf("please enter ammount");
    scanf("%d",&ammount);
    printf("please enter rate");
    scanf("%f",&rate);
    printf("please enter noy");
    scanf("%d",&noy);
    ans = (ammount*rate*noy)/100;
    printf("your inntres is %f",ans);
}