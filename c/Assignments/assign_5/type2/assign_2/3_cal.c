//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desiredoperations.
#include<stdio.h>
int Cal();
void main(){
   Cal();

}

int Cal(){
 int a, b;
    char op;
    printf("Enter any two number: ");
    scanf("%d %d", &a, &b);
    printf("\nwhat operation do you want to perform: ");
    fflush(stdin);
    scanf("%c", &op);
    if(op == '+') return a+b;
    else if(op == '-') return (a-b);
    else if(op == '/') return (a/b);
    else if(op == '*') return (a*b);
    else if(op == '%')  return (a%b);
    else return "enter vaild value";
    
}