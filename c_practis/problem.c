#include<stdio.h>

void main(){
    int x,y;
    char ope;
    printf("enter a value x and y:\n");
    scanf("%d %d",&x,&y);
    printf("use this operatiors(+,-,*,/):\n");
    scanf(" %c",&ope);
    switch (ope)
    {
    case '+':
        printf("sum is %d\n", x+y);
        break;
    case '-':
        printf("subtrac is %d\n", x-y);
        break;
    case '*':
        printf("multi is %d\n", x*y);
        break;
    case '/':
        printf("division is %d\n", x/y);
        break;
    default:{
        printf("not vailed opreatior\n");
    }
        break;
    }
}