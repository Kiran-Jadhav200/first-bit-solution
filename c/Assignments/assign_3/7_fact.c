//Find factorial of number.
#include<stdio.h>
void main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    int sum =1;
    int i = num;
    while (i>0){
        sum*=i;
        i--;
    }
    printf("sum : %d",sum); 
}