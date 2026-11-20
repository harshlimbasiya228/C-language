//stor n elementin an arrayand print the element using pointer
#include<stdio.h>
void main(){
    int n,i=0;
    printf("enter a value\n");
    scanf("%d",&n);
    int array[n];
    for (i = 0;i<n;i++)
    {
        printf("enter a element\n");
        scanf("%d",&array[i]);
    }
    int *ptr=array;//pointer to first element of array
    for (i = 0;i<n;i++)
    {
        printf("element=%d \n",*(ptr+i));
    }

}