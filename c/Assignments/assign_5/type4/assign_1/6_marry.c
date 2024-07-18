//Write a program to check if person is eligible to marry or not (male age >=21 and female age>=18).
#include<stdio.h>
int marry(int,char);
void main(){
    if(marry(21,'f')){
        printf("go marray");
    }
    else
    {
        printf("no you cannot marry");
    }
    
}
int marry( int age,char gender){
    
    if((gender=='f' && age>= 18) || (gender=='m' && age >=21)){
       return 1;
    }
    else
    {
        return 0;
    }
}