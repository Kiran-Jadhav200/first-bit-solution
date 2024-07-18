#include<stdio.h>
void perfectNumber(int);
void main(){

    perfectNumber(19);
}

void perfectNumber(int range){
         
    printf("enter number: ");
    scanf("%d",&range);
    printf("the perfect number are: ");
    for (int i = 0; i < range; i++)
    {
        int sum =0;
         int j =1;
    while(j<i){
        if(i%j==0){
            sum+=i;
        }
        j++;
    }
    if(sum==i) printf(" %d ",i);
    
    }
}