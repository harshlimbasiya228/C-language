#include<stdio.h>

struct Book{
    char Title[50];
    char Author[50];
    char Publication[50];
    float price;
};
void Book_summary(struct Book a[3],int i);
void main(){
    struct Book a[3];
     int i;
     for(i=0;i<3;i++){
        printf("enter a book name\n");
        scanf(" %[^\n]",a[i].Title);
        printf("enter author\n");
        scanf("%[^\n]",a[i].Author);
        printf("enter a pubalication deaitls\n");
        scanf("%[^\n]",a[i].Publication);
        printf("enter a price\n");
        scanf("%f",&a[i].price);
         Book_summary(a,i);
     }
}
     void Book_summary(struct Book a[3],int i){
        for (i=0;i<3;i++)
        {
            printf("%s %s %s %f",a[i].Title,a[i].Author,a[i].Publication,a[i].price);
        }
     }
