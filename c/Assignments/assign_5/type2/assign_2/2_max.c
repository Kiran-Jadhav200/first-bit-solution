#include<stdio.h>
//Write a program to find greatest of three numbers using nested if-else.
int max();
void main(){
   max();
}
int max()
{
     int a,b,c;
    printf("enter values: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c) return a;
    else if(b>a && b>c) return b;
    else return c;

}