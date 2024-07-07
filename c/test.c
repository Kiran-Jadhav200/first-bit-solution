#include <stdio.h>

int main() {
    int num; int rem =0,sum=0;
    scanf("%d", &num);
    int temp =num;
        while(num>0){
         int rem = num%10;
            sum = sum+(rem*rem*rem);
            num = num/10; 
        }
        temp==sum?printf("is a armstrong nums: %d",sum):printf("is not a armstrong nums: %d",sum);
}