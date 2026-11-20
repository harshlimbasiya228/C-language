#include<stdio.h>

float averarge(int a,int b,int c);
float averarge(int a,int b,int c){
    return(a+b+c)/3.0;
}
int main(){
    int a = 7,b = 9,c = 3;
    printf("the averarge value of %f",averarge( a,b,c));
    return 0;
}