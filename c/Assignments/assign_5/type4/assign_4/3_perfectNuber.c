#include<stdio.h>
int perfectNumber(int);
void main(){
int range ;
printf("Enter number: ");
scanf("%d",&range);
for (int i = 0; i < range; i++)
{
    if( perfectNumber(i)){
        printf(" %d ",i);
    }
}

   
}

int perfectNumber(int i){
         

        int sum =0;
         int j =1;
    while(j<i){
        if(i%j==0){
            sum+=i;
        }
        j++;
    }
    return sum==i;
    
    }
