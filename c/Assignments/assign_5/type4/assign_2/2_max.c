#include<stdio.h>
//Write a program to find greatest of three numbers using nested if-else.
void max(int,int,int);
void main(){
   max(7,8,9);
}
void max(int a,int b, int c)
{
   if(a>b && a>c) return a;
    else if(b>a && b>c) return b;
    else return a;


}