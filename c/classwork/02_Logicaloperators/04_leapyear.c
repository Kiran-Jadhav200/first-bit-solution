#include<stdio.h>
void main(){
    int year = 2016;
    int ans = ((year % 100 != 0) || (year % 400 == 0) && (year % 4 == 0));
    printf("leap year if ans is 1 else not 0: %d",ans);
}