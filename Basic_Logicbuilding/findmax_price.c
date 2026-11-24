#include<stdio.h>

void main(){
    int n,N,k;
    int i,j,total=0,count;
    int price[20];
    char category[20];

    printf("enter a value of n:\n");
    scanf("%d",&n);

    printf("enter a value of N:\n");
    scanf("%d",&N);

    printf("enter a value of k:\n");
    scanf("%d",&k);

    printf("enter a price :\n");
    for(i=0;i<n;i++){
        scanf("%d",&price[i]);
    }

    printf("enter a category :\n");
    for(i=0;i<n;i++){
        scanf(" %c",&category[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(price[i]<price[j]){
                int temp = price[i];
                price[i] = price[j];
                price[j] = temp;

                char ch = category[i];
                category[i] = category[j];
                category[j] = ch;
            }
        }
    }

    for(i=0;i<n && N>0;i++){
        count=0;
        for(j=0;j<i;j++){
            if(category[i] == category[j]){
                count++;
            }
        }
        if(count<k){
            total = total + price[i];
            N--;
        }
    }
    printf("Total Price : %d\n",total);
}