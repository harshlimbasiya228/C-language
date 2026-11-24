#include<stdio.h>
void main(){
    int n,flag,i,j,unique=0,frequency;
    printf("enter a value of n:");
    scanf("%d",&n);
    int a[n];
    printf("Enter a element of array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // unique element count in array
    for(i=0;i<n;i++){
        flag=1;
        for(j=0;j<n;j++){
            if(a[i]==a[j] && i!=j){
                flag = 0;
                break;
            }
        }
         if(flag==1){
                unique++;
            }
    }
    printf("Unique element count : %d",unique);
    printf("\n");
    // find domenet number
    for(i=0;i<n;i++){
        frequency=0;

        for ( j = 0; j < n; j++)
        {
            if(a[i]==a[j]){
                frequency++;
            }
        }

        if(frequency>unique){
            flag=1;

            for(j=0;j<i;j++){
                if(a[i]==a[j]){
                    flag=0;
                    break;
                }
            }
                if(flag==1){
                    printf("%d ",a[i]);
                }
        }
    }
}