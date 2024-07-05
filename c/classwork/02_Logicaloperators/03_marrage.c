#include<stdio.h>
void main(){
    int age= 20;
    char gender = 'm';
    
    if((gender == 'f' && age >=21) || (gender =='m' && age>=21)){
        printf("yes");
    }
    else printf("no");


}