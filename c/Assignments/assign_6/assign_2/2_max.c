#include<stdio.h>
//Write a program to find greatest of three numbers using nested if-else.
void max(int*,int*,int*);
void main(){
    int a =5;
    int b = 25;
    int c =1;
   max(&a,&b,&c);
}
void max(int *a,int *b, int *c)
{
     
    if(*a > *b && *a > *c) printf("greater is %d",*a);
    else if(*b > *a && *b > *c) printf("greater is %d",*b);
    else printf("greater is %d",*c);

}