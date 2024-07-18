//Accept the price from user. Ask the user if he is a student (user may say yes orno). If he is a student and he has purchased more than 500 than discount is 20% otherwise discount is 10%.But if he is not a student then if he has purchasedmore than 600 discount is 15% otherwise there is not discount.

#include<stdio.h>
double studentDiscount(float);
double nonStudentDicount(double);

void main(){
   float bill;
    char student ;
    printf("if you are student enter y else n:" );
   
   scanf("%c",&student);
 
   if(student == 'y' || student == 'Y' ){
    printf("you have to pay %lf ", studentDiscount(2321));
   }
   else if (student=='n' || student =='N')
   {
   
    printf("you have to pay %lf ",nonStudentDicount(2321));
    
   }
   else printf("invalid input");
   
}

double studentDiscount(float bill){

    if(bill> 500) return bill- (bill*0.20);
    else  return bill - (bill*0.10);

}
double nonStudentDicount(double bill){
 
   
    if(bill>600) return bill-(bill*0.15);
}