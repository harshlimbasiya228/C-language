#include<stdio.h>

void main(){
    int a,b,c;
    printf("entra a value a:");
    scanf("%d",&a);
    printf("entra a value b:");
    scanf("%d",&b);
    printf("entra a value c:");
    scanf("%d",&c);
   if(a>b && a>c){
    printf("largest number is :%d\n",a);
   }
   else if (b>a && b>c){
    printf("largest number is :%d\n",b);
   }
   else 
   printf("largest number is :%d\n",c);

}