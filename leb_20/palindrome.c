#include<stdio.h>
#include<string.h>
void polin(char str[]);
void main(){
    char str[100];
    printf("enter a string:\n");
    scanf("%s",str);
    polin(str);
}
void polin(char str[]){
    char s[100];
   strcpy(s,str);
   strrev(s);
   if(strcmp(str,s)==0){
    printf("this string is polindroam\n");
   }else{
    printf("this string not polindroam\n");
    }
}