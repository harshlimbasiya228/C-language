// using a string pointer remove a space and spcial char from string
#include<stdio.h>
void space_spical(char s1[],char clean[]);
void main(){
    char s1[100],clean[100];
    printf("enter a string\n");
   scanf(" %s",s1);
   space_spical( s1, clean);
}
void space_spical(char s1[],char clean[]){
    char *p=s1;
    char *q=clean;
    while(*p !='\0'){ // fixed condition
        if((*p>='A'&& *p<='Z')||(*p>='a'&& *p<='z')||(*p>='0'&& *p<='9'))
      {
        *q=*p;
        q++;
      }
      p++;
    }
    *q='\0';
     printf("speace and special ch remove=%s",clean);
}
