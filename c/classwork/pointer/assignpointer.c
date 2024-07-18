#include<stdio.h>
#include<math.h>
void main(){
    int a =10;
    double d= 10;
    int *x = &a;
    //char *ch = &a;
    double *y = &d;
    printf("%u\n", (x+10));
    printf("%u\n", (x+4));
    printf("%u\n", (x+5));
    printf("double\n");
    printf("%u\n", (y+5));
    printf("%u\n", (y+5));



    
}