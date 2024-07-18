//Find factorial of number.
#include<stdio.h>
int fact(int);
void main(){
  fact(8);
}
int fact(int num){
      
    int sum =1;
    int i = num;//5
    while (i>0){//5>0
        sum*=i;
        i--;
    }
    return sum; 
}