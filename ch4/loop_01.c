#include <stdio.h>

int main (){
    int i = 10;
    printf("the vlaue of i is %d \n" ,i);

    i=i+10; // 20
    printf("the value of i is %d \n" ,i);

    printf("the value of i is %d \n", i++); //20
    printf("the value of i is %d \n" , i); // 21 

    // i++ print i first and then increments i (post increment operator)
    // ++i increment i first and then print i (post increment operator)

    return 0;
}