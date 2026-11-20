#include<stdio.h>

// first 50 unit = rs.0.50/unit
// next 100 unit = rs.0.75/unit (51 to 150)
// next 100 unit = rs.1.20/unit (150 to 250)
// above 200 unit = rs.1.50/unit
// extra 20% surcharge in add total bill

void main(){
 int unit;
 float bill , total;

 printf("enter a unit:");
 scanf("%d",&unit);

 if(unit <= 50){
    bill=unit*0.50; // first 50
 }else if(unit <= 150){
    bill = (50*0.50) + (unit -50)*0.75; // next 51 to 150 =100
 }else if(unit <= 250){
    bill = (50 * 0.50) + (100 * 0.75) + (unit - 150) * 1.20; // next 150 to 250 = 100
 }
 else{
     bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + (unit - 250) * 1.50;
 }
 total = bill +(bill * 0.20);
 printf("bill is %2.f\n",total);

}