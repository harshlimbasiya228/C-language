#include<stdio.h>

void main(){
    char x;
    printf("enter a charater");
    scanf("%c",&x);
     
    if(x == 'a'|| x == 'e'|| x == 'i'|| x == 'o'|| x == 'u'|| x == 'A'|| x == 'E'|| x == 'I'|| x == 'O'|| x == 'U'){

        printf("vowel",x);
    } else
    if(x >= 'a' && x<= 'z' ||  x >= 'A' && x<= 'Z'){
        printf("consonant",x);
    } else{
        printf("this charater is not a alpabate",x);
    }
                                                                                          
}