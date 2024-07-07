//Accept the price from user. Ask the user if he is a student (user may say yes orno). If he is a student and he has purchased more than 500 than discount is 20% otherwise discount is 10%.But if he is not a student then if he has purchasedmore than 600 discount is 15% otherwise there is not discount.

#include<stdio.h>
void main(){
    float bill;
    char student ;
    printf("if you are student enter y else n:" );
   
   scanf("%c",&student);
 
   if(student == 'y' || student == 'Y' ){
     fflush(stdin);
    printf("you are student\nEnter amount: ");
    scanf("%f", &bill);
    if(bill> 500) printf("You will get discount of  20%% that is %.2f",(bill*0.20));
    else  printf("You will get discount of  10%% that is %.f",(bill*0.10));
   }
   else if (student=='n' || student =='N')
   {
   
    printf("Your are not a student\nEnter amount: ");
    scanf("%f", bill);
   
    if(bill>600) printf("You will get discount of  15%% that is %f",(bill*0.15));
    
   }
   else printf("invalid input");
   
}