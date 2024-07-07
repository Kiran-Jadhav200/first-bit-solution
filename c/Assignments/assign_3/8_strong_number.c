#include<stdio.h>
void main(){
 /*what is strong number so the strong number is a number whole sum of fact is equal to num taken from user*/
 int num=145;
 int x=num;
 int r,sum=0;
 int fact=1;
 while(num!=0){
    r=num%10;
    num=num/10;
    fact =1;
    while(r>0){
        fact=fact*r;
        r--;
    }

    sum=sum+fact;
 }
 if(sum==x)
printf("It is a strong no.");
else
printf("It is not a strong no.");
    


}
