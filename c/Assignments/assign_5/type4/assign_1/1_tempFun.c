#include<stdio.h>

double CToF(int);
void main(){
    int num ;
    printf("Enter number: ");
    scanf("%d",&num);
printf("F: %lf",CtoF(num));
}
double CtoF(int cel){
    float ans = (cel *9/5)+32;
   return (cel *9/5)+32;
}