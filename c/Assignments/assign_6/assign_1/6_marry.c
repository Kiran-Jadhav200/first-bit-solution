//Write a program to check if person is eligible to marry or not (male age >=21 and female age>=18).
#include<stdio.h>
void marry(int,char);
void main(){
    marry(25,'f');
    
}
void marry( int age,char gender){
    
    if((gender=='f' && age>= 18) || (gender=='m' && age >=21)){
        printf("go marray");
    }
    else
    {
        printf("no you cannot marry");
    }
}