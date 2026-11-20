#include<stdio.h>
void intrest(float,float,float,float);
void main(){
    float p,r,m,result;
    printf("enter a value of p,r,m:\n");
    scanf("%f %f %f",&p,&r,&m);
    intrest(p,r,m,result);
}
void intrest(float p,float r,float m,float result){
    result=(p*r*m)/100;
    printf("result=%.2f",result);
}