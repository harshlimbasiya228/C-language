#include<stdio.h>

void main(){
    int n = 3;
    for(int i = 0;i < n; i++)
{
    //This loop for 0 to 2
    //if i = 0 ...> print 1 star
    //if i = 1 ...> print 3 stars
    //if i = 2 ...> print 5 stars
    // no of_star (2*i+1)

    for( int j = 0; j < (2*i+1); j++){
        printf("*");
    }
    printf("\n");
}
}