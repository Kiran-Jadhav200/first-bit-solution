//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desiredoperations.
#include<stdio.h>
void main(){
   int num =13;
   int num2=23;
   Cal(&num,num2,'+');

}

void Cal(int *a, int *b, char op){

    printf("\nwhat operation do you want to perform: ");
    fflush(stdin);
    scanf("%c", &op);
    if(op == '+') printf("you do %c the answer is %d",op,*a + *b);
    else if(op == '-') printf("you did %c the answer is %d",op,(*a- *b));
    else if(op == '/') printf("you did %c the answer is %d",op,(*a/ *b));
    else if(op == '*') printf("you did %c the answer is %d",op,(*a * *b));
    else if(op == '%') printf("you did %c the answer is %d",op,(*a % *b));
    else printf("enter vaild value");
    
}