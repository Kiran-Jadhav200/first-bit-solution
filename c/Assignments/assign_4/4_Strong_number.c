#include<stdio.h>
void main(){
    int range =0;
    printf("enter number: ");
    scanf("%d",&range);
    printf("the strong number are: ");
    for (int i = 1; i <= range; i++)
    {
        int r =0,sum=0,fact,temp=i;

    while(temp!=0){
    r=temp%10;// 1
    fact =1;
    while(r>0){ //4>0
        fact=fact*r;// 4* 5= 120
        r--;//5-1 =4
    }
    temp/=10; //0
 sum=sum+fact;//120 +20 +5 = 145
 }
 
    if(sum==i) printf(" %d ",i);
    
    }
    
}