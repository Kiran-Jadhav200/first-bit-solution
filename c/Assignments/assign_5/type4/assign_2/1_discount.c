#include<stdio.h>
//Find the price of item when discount is given (specify different discount based onprice)
double discount(double);
void main(){
    
printf("you got discount of %lf",discount(4554));

}
double discount(double bill)
{
    
    printf("Enter Your Bill amaount: ");
    scanf("%lf", &bill);//1200
    if(bill>=500 && bill<=1000) return bill-(bill*0.05);
    else if(bill>1000 && bill<=5000) return bill-(bill*0.10);
    else if(bill>5000 && bill<=10000) return bill-(bill*0.25);
    else if(bill>15000 && bill<=20000)  return bill-(bill*0.55);
    else if(bill>20000) return bill-(bill*0.65);
    else{
        printf("you are not eliglibe :(");
    }
}