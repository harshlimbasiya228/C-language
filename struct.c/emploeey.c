#include<stdio.h>
struct emplooy{
    char name[20];
    int id;
    float salary;
};
void main(){
   struct emplooy e[3];
   printf("enter a emplooy details:\n");
   int i=0;
   for (i=0;i<3;i++)
   {
   printf("enter a emplooy name:\n");
   scanf(" %[^\n]",e[i].name); 
   printf("enter a emplooy id:\n");
   scanf("%d",&e[i].id);
   printf("enter a emplooy salary:\n");
   scanf("%f",&e[i].salary);
   }
   for(i=0;i<3;i++){
    printf("%s ",e[i].name);
    printf("%d ",e[i].id);
    printf("%f ",e[i].salary);
   }
}