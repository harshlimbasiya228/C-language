#include<stdio.h>
void arr_problem(int [],int);
void main(){
    int n,i;
    printf("enter a value of n:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter a element :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    arr_problem(arr,n);
}
void arr_problem(int arr[],int n){
    int i,j,sum,sum2,digit,digit2,temp,temp2,result,max=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            sum=0,sum2=0;
            temp=arr[i];
            temp2=arr[j];
            while (temp>0)
            {
                digit = temp%10;
                sum = sum + digit;
                temp = temp/10;
            }
             while (temp2>0)
            {
                digit2 = temp2%10;
                sum2 = sum2 + digit2;
                temp2 = temp2/10;
            }
            if(sum==sum2){
                result = arr[i]+arr[j];
                if(result>max){
                    max = result;
                }
            }
        }
    }
    printf("Output : %d",max);
}