#include<stdio.h>
void main(){
    int basic = 78000;
    float da,ta,hra, sal;
    if(basic <= 5000){
        da = basic* 10/100;
        ta = basic * 20/100;
        hra = basic * 25/100;
        sal = basic - (da+ta+hra);
    }
    else{
        da = basic* 15/100;
        ta = basic * 25/100;
        hra = basic * 30/100;
        sal = basic - (da+ta+hra);
        
    }
    printf("your sal is %.2f",sal);
   
}