//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desiredoperations.
#include<stdio.h>
void main(){
   Cal();

}

void Cal(){
 int a, b;
    char op;
    printf("Enter any two number: ");
    scanf("%d %d", &a, &b);
    printf("\nwhat operation do you want to perform: ");
    fflush(stdin);
    scanf("%c", &op);
    if(op == '+') printf("you do %c the answer is %d",op,a+b);
    else if(op == '-') printf("you did %c the answer is %d",op,(a-b));
    else if(op == '/') printf("you did %c the answer is %d",op,(a/b));
    else if(op == '*') printf("you did %c the answer is %d",op,(a*b));
    else if(op == '%') printf("you did %c the answer is %d",op,(a%b));
    else printf("enter vaild value");
    
}