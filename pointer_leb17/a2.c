//Demonstar int,float,char,double pointer
#include<stdio.h>
void main(){
    int a=328;
    float b=99.99;
    char c='H';
    double d=34.5768;
    printf("demonstar of deta type:\n");
    int *ptr1=&a;
   float *ptr2=&b;
    char *ptr3=&c;
    double *ptr4=&d;

    printf("value=%d address=%p\n",a,ptr1);
    printf("value=%.2f address=%p\n",b,ptr2);
    printf("value=%c address=%p\n",c,ptr3);
    printf("value=%.4lf address=%p\n",d,ptr4);

}