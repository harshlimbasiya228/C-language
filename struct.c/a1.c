#include<stdio.h>

struct employee{
   char employeeName[50];
   float salary;
   int employeeId;
};
void employee_daitils(struct employee c);
void main(){
    struct employee c;
    printf("enter a employee Name:\n");
    scanf(" %[^\n]",c.employeeName);
    printf("enter a employee salary:\n");
    scanf("%f",&c.salary);
    printf("enter a employeeId:\n");
    scanf("%d",&c.employeeId);
    employee_daitils(c);

}
void employee_daitils(struct employee c){
    printf("%s %.2f %d",c.employeeName,c.salary,c.employeeId);
}