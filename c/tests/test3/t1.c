#include<stdio.h>

void sumOfDigits(int);

void main(){
    int num =0;
    printf("Enter the number: ");
    scanf("%d",&num);
sumOfDigits(num);
}

void sumOfDigits(int num){
    int cnt=0;
    int eSum=0, Osum=0;
    while (num!=0)
    {
        int rem = num%10;
       ++cnt;
        if(cnt%2==0){
            eSum+=rem;
        }
        else{
            Osum+=rem;
        }
        num/=10;
    }
    printf("The even number sum is %d\n", eSum);
    printf("The odd number sum is %d",Osum );
    
}

