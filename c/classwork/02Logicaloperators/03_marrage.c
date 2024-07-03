#include<stdio.h>
void main(){
    int age= 20;
    char gender = 'm';
    int ans = (gender == 'f' && age >=21) || (gender =='m' && age>=21);
    
    printf("%d",ans);


}