#include<stdio.h>
#include<math.h>
void main(){
    int n,d=0,i=0;
    printf("enter a binary value for n\n");
    scanf("%d",&n);
    while(n!=0){
    d=d+(n%10)*pow(2,i);  // binary to decimal conversion
    n=n/10;
    i++;}
    // decimal to bcd conversion
    int bcd[18],j=0;
    while(d!=0){
      bcd[j]=d%10;
      d=d/10;
      j++;
    }
    printf("bcd number\n");
    for(i=j-1;i>=0;i--){
       switch (bcd[i])
       {
       case 0:printf("0000\n");
        break;
       case 1:printf("0001\n");
        break;
       case 2:printf("0010\n");
       break;
        case 3:printf("0011\n");
       break;
        case 4:printf("0100\n");
       break;
        case 5:printf("0101\n");
       break;
        case 6:printf("0110\n");
       break;
        case 7:printf("0111\n");
       break;
        case 8:printf("1000\n");
       break;
        case 9:printf("1001\n");
       break;
       default:
       printf("enter a d between 0 to 9");
        break;
       }
    }
}