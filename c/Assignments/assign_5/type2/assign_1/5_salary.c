#include<stdio.h>
float SalCal();
void main(){
   printf("Sal is %f", SalCal());
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