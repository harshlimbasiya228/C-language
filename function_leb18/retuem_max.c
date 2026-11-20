//return the maximum 0f three folating_point number
#include<stdio.h>
void max_float(float,float,float,float);

void main(){
    float a,b,c,max;
    printf("enter a value of a,b,c\n");
    scanf("%f %f %f",&a,&b,&c);
    max_float(a,b,c,max);
}
void max_float(float a,float b,float c,float max){
    if(a>b && a>c){
        max=a;
    }else if(b>a && b>c){
        max=b;
    }else{
        max=c;
    }
    printf("max=%f",max);
}