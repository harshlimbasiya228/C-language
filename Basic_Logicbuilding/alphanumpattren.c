#include<stdio.h>
void main(){
    int i,count;
    char str[50];
     printf("enter a string:\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        count=1;
        if(str[i]>='0' && str[i]<='9'){
            count = str[i] -'0';
            while (count>0)
            {
                printf("%c",str[i+1]);
                count--;
            }
            i++;
        }else{
            printf("%c",str[i]);
        }
    }
}