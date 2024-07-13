//Find factorial of number.
#include<stdio.h>
void fact();
void main(){
  
}
void fact(){
      int num;//5
    printf("Enter number: ");
    scanf("%d", &num);//5
    int sum =1;
    int i = num;//5
    while (i>0){//5>0
        sum*=i;
        i--;
    }
    printf("sum : %d",sum); 
}