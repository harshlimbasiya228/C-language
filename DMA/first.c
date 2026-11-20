// using malloc function
#include<stdio.h>
void main(){
    int *fp;
    fp=(int *)malloc(sizeof(int));
    *fp=28;
    printf("%d",*fp);
    free(fp); 
}