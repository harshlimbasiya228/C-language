#include<stdio.h>
#include<stdlib.h>

void main(){
    int n,i,j;
    printf("enter a value of n\n");
    scanf("%d",&n);
    int skill[n];
    printf("enter skill level :\n");
    for(i=0;i<n;i++){
        scanf("%d",&skill[i]);
    }
    int mindiff = abs(skill[0]-skill[1]);
    int temp = mindiff;

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            mindiff = abs(skill[i]-skill[j]);

            if(temp > mindiff){
            temp = mindiff;
            }
        }
        
    }
    printf("Min traning hour for two student equal skill level : %d",temp);
}