#include<stdio.h>
// Calculate sum of numbers in the given range

int  sumToRange();

void main(){  
    printf("the sum is %d",sumToRange());
}
int sumToRange(){
     int num = 0,i =0;
    printf("enter number you want sum till: ");
    scanf("%d", &num);
    printf("which loop you want to use\n while press 1: ");
    int choose;
    scanf("%d",&choose);
    if(choose==1)
    {
        int sum =0;
        while(i<=num){
       sum+=i;
        i++;
    }
    return sum;
   
    }
    else{
    printf("\nusing for loop\n");
    int sum=0;
    for (int j = 0; j <=10; j++)
    {
        sum+=i;
    }
    return sum;
    }
}