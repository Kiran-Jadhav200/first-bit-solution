#include<stdio.h>
int evenOdd();
void main(){
  if(evenOdd()) printf("even");
  else printf("odd");
}
int evenOdd(){
      int num =5;
   return num%2==0;
}
