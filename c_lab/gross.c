// caclute gross salary
#include<stdio.h>

void main(){
    float basic,hra,da,gross;
    printf("entera basic salary");
    scanf("%f",&basic);

    if(basic >= 30000){
       hra = 0.30 * basic;
        da = 0.95 * basic;
    }else if(basic >= 20000){
        hra = 0.25 * basic;
        da = 0.90* basic;
    }else if(basic >= 10000){
        hra = 0.20 * basic;
        da = 0.80* basic;
}else{
    hra = 0;
    da = 0;
}
gross = basic + hra + da;
printf("basic salary %2.f\n",basic);
printf("hra is %2.f\n",hra);
printf("da is %2.f\n",da);
printf("gross salary is %2f\n",gross);

}