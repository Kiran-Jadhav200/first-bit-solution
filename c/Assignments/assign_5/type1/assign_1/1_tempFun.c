#include<stdio.h>

void fToC();
void main(){
    fToC();

}
void fToC(){
    int cel= 26;
    float ans = (cel *9/5)+32;
    printf("ans : %f F",ans);
}