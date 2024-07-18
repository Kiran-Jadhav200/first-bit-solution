#include<stdio.h>
void discount(int);
void main(){
    int amount;
    printf("enter amount: ");
    scanf("%d",&amount);
    discount(amount);
}
void discount(int amount){
    if(amount>50 && amount<100){
        printf("You have to pay %.2lf and got discount of 5%%  ",amount-(amount*0.05));
    }
  else if(amount>=100 && amount<1000){
        printf("You have to pay %.2lf and got discount of 10%%  ",amount-(amount*0.10));
    }
  else if(amount>1000){
        printf("You have to pay %.2lf and got discount of 15%%  ",amount-(amount*0.15));
    }
    else{
        printf("you are not egibile for discount");
    }
    

}
