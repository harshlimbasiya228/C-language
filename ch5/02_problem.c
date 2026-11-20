#include<stdio.h>

float forace(float);

float forace(float mass){
  return mass*9.8;
}

void main(){
    int m = 50;
    printf("the value of forace %f\n",forace(m));
}
