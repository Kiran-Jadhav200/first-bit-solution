#include<stdio.h>

int isPrime(int);

void main(){
    int n = 0;
    printf("Enter range: ");
    scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
        if(isPrime(i)){
            printf(" %d ", i);
        }
    }
}

int isPrime(int n)
{
    if (n <= 1) {
        return 0;
    }
    
    for(int i = 2; i <= n/2; i++ ){
        if(n % i == 0){
            return 0;
        }
    }
    
    return 1;
}