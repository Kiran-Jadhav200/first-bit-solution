#include<stdio.h>
void main(){
    printf("Enter your value in km: ");
    int num =0;
    scanf("%d", &num);
    printf("Your enterd distance in km is %d and in meter is %d",num,(num*1000));
}