#include<stdio.h>
//Print table for the given number.
void armstrong();
void main(){
    armstrong();
}

void armstrong(){
  int num,sum = 0;
    printf("enter number you want to check is armstrong: ");
    scanf("%d", &num);
    printf("which loop you want to use\n while press 1: ");
    int choose;
    scanf("%d",&choose);
    if(choose==1)
    {
      int temp =num;
        while(num>0){
         int rem = num%10;
            sum = sum+(rem*rem*rem);
            num = num/10; 
        }
        temp==sum?printf("is a armstrong nums: %d",sum):printf("is not a armstrong nums: %d",sum);
    }
    else{

    printf("\nusing for loop\n");
    int temp = num;
    for (int j = 0; num>0; j++)
    {
      int rem = num%10;
            sum = sum+(rem*rem*rem);
            num = num/10; 
        }
        temp==sum?printf("is a armstrong nums: %d",sum):printf("is not a armstrong nums: %d",sum);
    }
    
}