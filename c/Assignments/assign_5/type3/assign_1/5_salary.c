#include<stdio.h>
void SalCal(int);
void main(){
   SalCal(45454);
}
void SalCal( int basic ){
   
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