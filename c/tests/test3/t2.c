#include<stdio.h>
void main(){
    int start =0;int end= 0;
    printf("enter start: ");
    scanf("%d", &start);
    printf("enter end: ");
    scanf("%d", &end);

    for (int  i = start; i <= end;i+=2)
    {     
         printf("%d\n",i);
    }
    
}