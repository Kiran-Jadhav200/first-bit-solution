#include<stdio.h>
//Print table for the given number.
void main(){
    int num = 0,i =0;
    printf("enter number you want table of : ");
    scanf("%d", &num);
    printf("which loop you want to use\n while press 1: ");
    int choose;
    scanf("%d",&choose);
    if(choose==1)
    {
        while(i<=10){
        printf("%d X %d = %d\n", num,i,num*i);
        i++;
    }
    }
    else{

    printf("\nusing for loop\n");
    for (int j = 0; j <=10; j++)
    {
        printf("%d X %d = %d\n", num,i,num*0);
    }
    }
    

    
}