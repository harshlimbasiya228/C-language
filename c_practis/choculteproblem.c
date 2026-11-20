#include<stdio.h>
void main(){
    //rupess=15,chocult prices=1,coudition 3 rapper give then add one chocult 
    //how many cho.. is collact ans = 15+5+1+1=22
    int n=15,m=1,k=3;
    int choculates,rapper,extra;
    choculates = n/m;//15/1=15
    rapper=choculates;
    while (rapper>=k)
    {
        extra = rapper/k;//15/3=5
        choculates=choculates+extra;//15+5=20
        rapper = extra +(rapper%k);//(5%3=2) s0 3 rapper = 1cho.. and 2 rapper remaining //no_cho = 20+1=21 
        //21+1=22 because 2 rapper + 1 extra cho.. rapper
    }
    printf("%d ",choculates);
}