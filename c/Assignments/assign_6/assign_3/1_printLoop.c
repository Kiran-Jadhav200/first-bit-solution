#include<stdio.h>
//Print numbes from 1 to 10
void printloop(int*);
void main(){
    int num =10;
printloop(&num);

}
void printloop(int *n){
    for (int  i = 0; i <=  *n; i++)
{
    printf("%d\n",i);
}
// using while
printf("\n using while");
int i =0;
while (i<=10)
{
   printf("%d\n",i);
   i++;
}
}