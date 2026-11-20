#include<stdio.h>

void main(){ 
    float cgpa [3] = {7.8,9.1,9.0};
     for (int i = 0; i < 3; i++)
    {
        printf("the value of array to index %.1f\n",cgpa [i],i);
    }
}