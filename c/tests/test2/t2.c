#include<stdio.h>
void grade(double);

void main(){
    float marks;
    float total;
    printf("Enter marks obtain: ");
    scanf("&d",&marks);
    printf("Enter total marks: ");
    fflush(stdin);
    scanf("%d",&total);
    double avg = (marks/total)*100;
     grade(avg);
   
//    if(avg>=75) printf("A++");
//     else if(avg<75 && avg>=60) printf("A");
//     else if(avg<60 && avg>=50) printf("B");
//     else if(avg>50 && avg>=35) printf("Pass");
//     else printf("fail :(") ;


}
void grade(double marks){
    if(marks>=75) printf("A++");

    else if(marks<75 && marks>=60) printf("A");
    else if(marks<60 && marks>=50) printf("B");
    else if(marks>50 && marks>=35) printf("Pass");
    else printf("fail :(") ;
}

