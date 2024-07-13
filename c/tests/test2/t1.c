#include<stdio.h>

int maxOfThree(int,int,int);
void main(){
    int a,b,c;
    printf("enter number: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("The max of the number: %d", maxOfThree(a,b,c));
}

int maxOfThree(int a,int b,int c){
    
    if(a>b && a>c) return a;
    else if(b>a && b>c) return b;
    else return c;
}

















































































