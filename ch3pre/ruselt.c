#include<stdio.h>

void main(){
    int sub1;
    int sub2;
    int sub3;
    int totle;
    printf("please enter mark of sub1\n");
    scanf("%d",&sub1);
    printf("please enter mark of sub2\n");
    scanf("%d",&sub2);
    printf("please enter mark of sub3\n");
    scanf("%d",&sub3);
    totle = (sub1 + sub2 + sub3)/3;
    if (totle >= 40 && sub1 >=33 && sub2 >=33 && sub3 >= 33){
        printf("pass");
    } else {
        printf("fale");
    }
}
