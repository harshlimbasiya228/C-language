#include<stdio.h>
struct student{
    char name[15];
    int rollNo;
    float spi;
};
void main(){
    struct student s;
    printf("enter a first student details:\n");
   
        printf("enter a student name\n");
        scanf(" %[^\n]",s.name);
        printf("enter a student roll no\n");
        scanf("%d",&s.rollNo);
        printf("enter a student spi\n");
        scanf("%f",&s.spi);
 printf(" %s\n %d\n %f\n",s.name,s.rollNo,s.spi);
   
    } 