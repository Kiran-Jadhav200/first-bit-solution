#include<stdio.h>
void main(){
    int a =154;
    int* pin = &a; 
    printf("this is address of a %d \n", pin);
    printf("This is *pin: %d\n",*pin );
    *pin = 14 ;
    printf("value of a is %d \n", a);

}