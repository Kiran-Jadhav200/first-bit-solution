#include<stdio.h>
//Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to enter his choice,then based on that perform the desired operations.

float SalCal();
int evenOdd();
void main(){
    printf("Your have choice even odd\nenter number you want to find is even or odd: ");
   int choose ;
   printf("enter choose: ");
   if(choose==1){
    evenOdd();
   }
   else{
    SalCal();
   }
}
float SalCal(){
    int basic = 78000;
    float da,ta,hra;
    if(basic <= 5000){
        da = basic* 0.15;
        ta = basic * 0.20;
        hra = basic * 0.25;
        return basic + (da+ta+hra);
    }
    else{
        da = basic* 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
         return basic + (da+ta+hra);
        
    }
    return 0;
}
int evenOdd(){
      int num =5;
   return num%2==0;
}