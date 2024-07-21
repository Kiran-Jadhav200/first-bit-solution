//Find factorial of number.
#include<stdio.h>
void fact(int*);
void main(){
  fact(8);
}
void fact(int *num){
      
    int sum =1;
    int i = *num;//5
    while (i>0){//5>0
        sum*=i;
        i--;
    }
    printf("sum : %d",sum); 
}