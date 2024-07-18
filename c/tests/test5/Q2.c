#include<stdio.h>
void deposit();
void withdraw();
void main(){
    int choose=1;
   while (choose!=0){
        printf("what do you want to do:\n 1. Deposit\n2. withdraw  ");
        printf("\nEnter Your choose:");
        scanf("%d", &choose);
        if(choose==1) deposit();
        else if(choose==2) withdraw();

   }
    
    
}
void deposit(){
    double amount= 10;
    double depo;
    printf("\nEnter your amount you want to deposit");
    scanf("%lf",&depo);
    printf("your total balance: is %.2lf",amount+depo);
}
void withdraw(){
    double amount = 4200, out=0;
    printf("Enter your amount you want to withdraw");
    scanf("%d",&out);
    if(amount>3000)
    printf("after withdraw balance is %ld",amount-out);
    else{
        printf("you don't have balance");
    }
}