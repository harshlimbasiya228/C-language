//replace a char in given string
#include<stdio.h>
void replace(char s[]);
void main(){
    char s[100];
    printf("enter a string\n");
    gets(s);
    replace(s);

}
void replace(char s[]){
    int i;
    char odd,new;
    printf("enter a odd=%c",odd);
    scanf("%c",odd);
     printf("enter a new=%c",new);
     scanf("%c",new);
     for(i=0;s[i]!='\0';i++){
        if(s[i]==odd){
            s[i]=new;
        }
     }
     printf("%s",s);
}