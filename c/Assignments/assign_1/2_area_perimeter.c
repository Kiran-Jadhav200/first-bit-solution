//Finding area and perimeter of rectangle or circle.

#include<stdio.h>
const float PI = 3.14;
void main(){
    int radius=6; // radius of circle 
    int length = 8; // length of rect
    int width = 4; // width of react
    float Carea, Cperimeter, Rarea, Rperimeter;
    if(radius==0 || length==0 || width==0){
        printf("enter value");
    }
    else{
        printf(" area of circle : %.2f\n",PI*(radius*radius));
        printf("perimeter of circle: %.2f\n",2*PI*radius);
        printf("preimeter of reactangle: %.2f\n", (length+width)*2);
        printf("area of reactangle: %.2f\n",length * width);

    }
}