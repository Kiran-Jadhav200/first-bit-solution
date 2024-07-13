#include<stdio.h>
int sum();
int rev();
void main(){
  printf("sum : %d",sum());
  printf("sum : %d",rev());

 
}
int sum(){
int num = 125;
    int rem1= num%10;
    int q1= num/10;
    int rem2 = q1%10;
    int q2 = q1/10;
    int rem3 = q2%10;
    int q3 = q2/10;   
    int sum = 0;
    int rev = 0;
   
    if(q3==0){
        sum = rem1+rem2+rem3;
    } 
    return sum;
}
int rev(){
    int num = 125;
    int rem1= num%10;
    int q1= num/10;
    int rem2 = q1%10;
    int q2 = q1/10;
    int rem3 = q2%10;
    int q3 = q2/10;
    int sum = 0;
    int rev = 0;
   
    if(q3==0){
        sum = rem1+rem2+rem3;
        rev = (rem1*100)+ (rem2*10)+ (rem3); 
    } 
    return rev;
}