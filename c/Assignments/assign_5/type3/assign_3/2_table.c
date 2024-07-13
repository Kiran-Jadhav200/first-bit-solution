#include<stdio.h>
//Print table for the given number.
void table(int);
void main(){
table(7);
}
void table(int num){
    int i =0;

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


