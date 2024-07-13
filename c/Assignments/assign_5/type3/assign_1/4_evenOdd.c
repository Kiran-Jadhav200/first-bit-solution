#include<stdio.h>
void evenOdd(int);
void main(){
  evenOdd(5);
}

void  evenOdd(int num){
      
    if(num%2==0){
        printf("it's a even number");
    }
    else{
        printf("odd number");
    }
}