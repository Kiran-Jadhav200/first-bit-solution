#include<stdio.h>

void CToF(int);
void main(){
    int num ;
    printf("Enter number: ");
    scanf("%d",&num);
    CtoF(num);

}
void CtoF(int cel){
    float ans = (cel *9/5)+32;
    printf("ans : %f F",ans);
}