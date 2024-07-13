#include<stdio.h>
//Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to enter his choice,then based on that perform the desired operations.

void sal(int);
void evenOdd();
void main(){
    printf("Your have choice even odd\nenter number you want to find is even or odd: ");
   int choose ;
   printf("enter choose: ");
   if(choose==1){
    evenOdd(45);
   }
   else{
    sal(58454544);
   }
    
}
void sal(int basic){
     
     
     printf("You choose salary \nenter sal: ");
 
    float da,ta,hra, sal;
    if(basic <= 5000){
        da = basic* 0.15;
        ta = basic * 0.20;
        hra = basic * 0.25;
        sal = basic + (da+ta+hra);
    }
    else{
        da = basic* 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
        sal = basic + (da+ta+hra);       
    }
    printf("your sal is %.2f",sal);
    }

void evenOdd(){
    int num;
       
        scanf("%d", &num);
        num%2==0?printf("is even number"):printf("is odd number");
    
}