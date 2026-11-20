#include<stdio.h>

void main(){
    char choice;
    float a,b;
    printf("enter a two number:");
    scanf("%f %f",&a,&b);

    printf("using this operatior(+,-,*,/)");
    scanf(" %c",&choice);

    if(choice =='+'){
        printf("sum of %f\n",a+b);
    }else
     if(choice =='-'){
        printf("subtraction of %f\n",a-b);
    }else
     if(choice =='*'){
        printf("mutiplation of %f\n",a*b);
    }else
     if(choice =='/'){ 
        printf("division of %f\n",a/b);
    }else{
        printf("invaid operatior");
    }
}