#include<stdio.h>
// nums is prime or not
void primeOrNot(int*);
void main(){
    int num =10;
   primeOrNot(&num);
}

void primeOrNot(int *num){
     int i =0,flag =0;
    printf("which loop you want to use\n while press 1: ");
    int choose;
    scanf("%d",&choose);
    if(choose==1){
          
        while(i<num){
       if(*num%2==0) {
        flag= 1; break;
        }
        i++;
        }
       flag==0?printf("%d is a prime nums",*num):printf("%d is not a prime nums",*num);
   
    }
    else{
    printf("\nusing for loop\n");
   
    for (int j = 0; j <= *num; j++)
    {
        if(*num%2==0) {
        flag= 1; break;
        }
    }
    flag==0?printf("%d is a prime nums", *num):printf("%d is not a prime nums", *num);
    }
}