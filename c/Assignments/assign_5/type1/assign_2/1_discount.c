#include<stdio.h>
//Find the price of item when discount is given (specify different discount based onprice)
void discount();
void main(){
    
discount();

}
void discount()
{
    double bill;
    printf("Enter Your Bill amaount: ");
    scanf("%lf", &bill);//1200
    if(bill>=500 && bill<=1000)printf("you will get of 5%% so Total price to be paid is %.2lf",bill-(bill*0.05));
    else if(bill>1000 && bill<=5000) printf("you will get of 10%% so Total price to be paid is %.2lf",bill-(bill*0.10));
    else if(bill>5000 && bill<=10000) printf("you will get of 25%% so Total price to be paid is %.2lf",bill-(bill*0.25));
    else if(bill>15000 && bill<=20000) printf("you will get of 55%% so Total price to be paid is %.2lf",bill-(bill*0.55));
    else if(bill>20000) printf("you will get of 65%% so Total price to be paid is %.2lf",bill-(bill*0.65));
    else{
        printf("you are not eliglibe :(");
    }
}