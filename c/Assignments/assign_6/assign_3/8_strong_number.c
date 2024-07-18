#include<stdio.h>
void strongNumber(int);
void main(){
 /*what is strong number so the strong number is a number whole sum of fact is equal to num taken from user*/
 strongNumber(784);
}
void strongNumber(int num){
    
 int x=num; //145
 int r,sum=0;
 int fact=1;
 while(num!=0){
    r=num%10;// 1
    num=num/10; //0
    fact =1;
    while(r>0){ //4>0
        fact=fact*r;// 4* 5= 120
        r--;//5-1 =4
    }

    sum=sum+fact;//120 +20 +5 = 145
 }
 if(sum==x)
printf("It is a strong no.");
else
printf("It is not a strong no.");
}