//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desiredoperations.
#include<stdio.h>
void main(){
   Cal(4,5,'+');

}

void Cal(int a, int b, char op){

   
     if(op == '+') return a+b;
    else if(op == '-') return (a-b);
    else if(op == '/') return (a/b);
    else if(op == '*') return (a*b);
    else if(op == '%')  return (a%b);
    else return "enter vaild value";

    
}