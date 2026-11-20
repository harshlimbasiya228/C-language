#include<stdio.h>

void main(){
    int i,j;
    int student[20][2];  // 20 student and 2 mark
    for (i=0;i<20;i++)  // [i][0] this term 0 indicate rollno and 1 indicate mark
    {
        printf("enter a rollno and mark:",i++);
        scanf("%d %d",&student[i][0],&student[i][1]);
    }
    
}