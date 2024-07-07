#include<stdio.h>
void main(){
    int num,sum=0;
    printf("Enter value: ");
    scanf("%d", &num);
    int i =1;
    while(i<num){
        if(num%i==0){
            sum+=i;
        }
        i++;
    }
    if(sum==num) printf("perfect numer is %d",sum);
    else printf("No it's not perfect sum");
}