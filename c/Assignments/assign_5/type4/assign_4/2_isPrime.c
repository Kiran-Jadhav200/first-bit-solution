#include<stdio.h>
void isPrime(int);
void main(){
    int n = 0;
    printf("Enter range: ");
    scanf("%d",&n)
for (i i = 0; i < count; i++)
{
    /* code */
}

    
}
void isPrime(int n)
{
        int cnt;
    printf("Prime numbers are: ");
for(int i =1; i<=n; i++ ){//i=1 && 1<7
    cnt =0;
    for (int j = 2; j <=i/2;j++) //j=0
    {
        if(i%j==0){ //
            cnt++;
            break;
        }
    }
    if(cnt==0 && i!=1)
    printf("%d ",i);
    
}
}