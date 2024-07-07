#include<stdio.h>
// Calculate sum of numbers in the given range
void main(){
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
    printf("%d", sum);
   
    }
    else{
    printf("\nusing for loop\n");
    int sum=0;
    for (int j = 0; j <=10; j++)
    {
        sum+=i;
    }
     printf("sum is : %d ", sum);
    }
    

    
}