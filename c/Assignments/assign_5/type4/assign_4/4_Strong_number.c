#include<stdio.h>
int strongNumber(int);
void main(){
   printf("Enter number: ");
   int range;
    scanf("%d",&range);
    for(int i =0; i< range;i++){
        if(trongNumber(i)){
            printf(" %d ",i);
        }
    }
}

int  strongNumber(int i){
     
   
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
 
    return sum==i ;
    
    }
