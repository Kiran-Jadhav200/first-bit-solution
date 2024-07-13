#include<stdio.h>

double fToC();
void main(){
    printf("F: %lf",fToC());

}
double fToC(){
    int cel= 26;
    return (cel *9/5)+32;
     
}