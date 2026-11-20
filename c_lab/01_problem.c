#include<stdio.h>
 void main(){
    char ch;
    printf("enter a charater:");
    scanf("%c",&ch);

    if(ch >= 'a' && ch<= 'z'){
        printf("lower case");
    }else if (ch >= 'A' && ch<= 'Z')
    {
        printf("upper case");
    }else if (ch >= '0' && ch<= '9')
    {
        printf("digit");
 }else{
    printf("special charater");
 }
}