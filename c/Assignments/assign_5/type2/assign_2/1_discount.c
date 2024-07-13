#include<stdio.h>
//Find the price of item when discount is given (specify different discount based onprice)
double discount();
void main(){
    printf("you will get of 5%% so Total price to be paid is %.2lf",discount());

}
double discount()
{
    double bill;
    printf("Enter Your Bill amaount: ");
    scanf("%lf", &bill);//1200
    if(bill>=500 && bill<=1000) return bill-(bill*0.05);
    else if(bill>1000 && bill<=5000) return bill-(bill*0.10);
    else if(bill>5000 && bill<=10000) return bill-(bill*0.25);
    else if(bill>15000 && bill<=20000) return bill-(bill*0.55);
    else if(bill>20000) return bill-(bill*0.65);
    else return -1;
}