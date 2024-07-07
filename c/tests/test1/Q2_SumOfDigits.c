#include<stdio.h>
void main(){

    int num;
    int cnt=0,rem,sum=0;
    printf("Enter num: ");
    scanf("%d", &num);
    while (num>0)
    {rem = num%10;
        cnt++;
        if(cnt<=2){
            sum = sum+rem;
        }   
         num = num/10;
    }
    printf("the sum is %d",sum);
    
}