#include<stdio.h>
void evenOdd(int*);
void main(){
    printf("Enter number: ");
    int  num;
    scanf("%d",&num);
  evenOdd(&num);
}

void  evenOdd(int *num){
      
    if(*num%2==0){
        printf("it's a even number");
    }
    else{
        printf("odd number");
    }
}