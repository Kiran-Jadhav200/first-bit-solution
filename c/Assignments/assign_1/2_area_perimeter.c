//Finding area and perimeter of rectangle or circle.

#include<stdio.h>
void areaOfCircle();
void periOfCircle();
void areaOfReact();
void periOfReact();

const float PI = 3.14;
void main(){
areaOfCircle();
 periOfCircle();
 areaOfReact();
 periOfReact();  
}

void areaOfCircle(){
    int radius=6; // radius of circle 
     printf(" area of circle : %.2f\n",PI*(radius*radius));

}
void periOfCircle(){
    int radius=6; 
     printf("perimeter of circle: %.2f\n",2*PI*radius);

}
void areaOfReact(){
     int length = 8; // length of rect
        int width = 4; // width of react

printf("preimeter of reactangle: %.2f\n", (length+width)*2);
}


void periOfReact(){
     int length = 8; // length of rect
        int width = 4; // width of react
     printf("area of reactangle: %.2f\n",length * width);

}
