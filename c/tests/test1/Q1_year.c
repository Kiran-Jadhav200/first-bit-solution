// WAP to accept year and print no of days in Feb month;
#include<stdio.h>
void main(){
    int val = 0;
    // 1 year => 365 days 
    //jan->31 , march-> 31, april -> 30 may -> 31, june -> 30, july -> 31 ,aug -> 30, sept-> 31 oct -> 30 nov -> 31 dec-> 30 
    //31 -> 6 months totol day-> 186 days
    //30 -> 5 months total days -> 150 days
    //feb -> to have 28 days or 29 days

    printf("enter number: ");
    scanf("%d", val);
    int year = val * 365;


}