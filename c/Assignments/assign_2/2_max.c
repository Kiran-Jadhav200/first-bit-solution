#include<stdio.h>
//Write a program to find greatest of three numbers using nested if-else.
void main(){
    int a,b,c;
    printf("enter values: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c) printf("greater is %d",a);
    else if(b>a && b>c) printf("greater is %d",b);
    else printf("greater is %d",c);

}