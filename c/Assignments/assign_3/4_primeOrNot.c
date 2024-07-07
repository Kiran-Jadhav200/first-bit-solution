#include<stdio.h>
// nums is prime or not
void main(){
    int num = 0,i =0,flag =0;;
    printf("enter number you want that it is prime or not : ");
    scanf("%d", &num);
    printf("which loop you want to use\n while press 1: ");
    int choose;
    scanf("%d",&choose);
    if(choose==1){
          
        while(i<num){
       if(num%2==0) {
        flag= 1; break;
        }
        i++;
        }
       flag==0?printf("%d is a prime nums",num):printf("%d is not a prime nums",num);
   
    }
    else{
    printf("\nusing for loop\n");
   
    for (int j = 0; j <=num; j++)
    {
        if(num%2==0) {
        flag= 1; break;
        }
    }
    flag==0?printf("%d is a prime nums",num):printf("%d is not a prime nums",num);
    }
    

    
}