#include<stdio.h>
void fibo();
void main(){
   
    fibo();
}
void fibo(){
     int range;
    printf("Enter range: ");
    scanf("%d", &range);//7 
    printf("The fibo series is: ");
    int ans=0;
    int n1=0 ,n2 =1;
    for(int i = 0; i <= range; i++)//0,7
    {
        printf(" %d ",n1);
        int n3 = n1+n2;
        n1 = n2;
        n2=n3;
       
    }
}