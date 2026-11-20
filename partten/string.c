#include<stdio.h>
#include<string.h>

void main(){
    char s[25];
    printf("enter a string:\n");
    gets(s);
    int a=strlen(s);
    int i,j,k;
    for(i=0;i<a;i++){
        for(k=a-1;k>i;k--){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("%c ",s[j]);
        }
        printf("\n");
    }
}
