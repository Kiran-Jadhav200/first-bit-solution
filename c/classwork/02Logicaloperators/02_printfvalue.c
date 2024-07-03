#include<stdio.h>
void main(){
    int a = 1023;

    //int c = printf(" %d \n",a);
    //printf("c=%d",c);
    int c = printf("") || printf("Hello");
    
    printf("c= %d",c);
}