#include<stdio.h>
void fibo(int*);
void main(){
   int nums=14;
    fibo(&nums);
}
void fibo(int *range){
     
 
    printf("The fibo series is: ");
    int ans=0;
    int n1=0 ,n2 =1;
    for(int i = 0; i <= *range; i++)//0,7
    {
        printf(" %d ",n1);
        int n3 = n1+n2;
        n1 = n2;
        n2=n3;
       
    }
}