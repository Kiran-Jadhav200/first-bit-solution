#include<stdio.h>
void sum(int*);
void rev(int*);
void main(){
  int su =145;
  int re =145;  
  sum(&su);
  rev(&re);
}
void sum(int *num ){

    int rem1= *num%10;
    int q1= *num/10;
    int rem2 = q1%10;
    int q2 = q1/10;
    int rem3 = q2%10;
    int q3 = q2/10;   
    int sum = 0;
    int rev = 0;
   
    if(q3==0){
        sum = rem1+rem2+rem3;
    } 
    printf("sum: %d\nReverse: %d",sum);
}
void rev(int *num ){
   
    int rem1= *num%10;
    int q1= *num/10;
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
    printf("sum: %d\nReverse: %d",sum, rev);
}