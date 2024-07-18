#include<stdio.h>
const float PI = 3.14;
double areaofReact();
double perimeterOfReact();
double areaofCirle();
double perimeterOfCircle();
void main(){
    
        printf("area of circle: %.lf \n",areaofCirle());
        printf("perimeter of circle: %lf \n",perimeterOfCircle());
        printf("preimeter of reactangle: %lf \n",perimeterOfReact());
        printf("area of reactangle: %lf\n",areaofReact());
}

double areaofCirle(){
     int radius=6; 
     

}

double perimeterOfCircle(){
    int radius = 5;
    return 2*PI*radius;
}

double areaofReact(){
    int length = 8; // length of rect
    int width = 4; 
    return length * width;
}
double perimeterOfReact(){
     int length = 8; // length of rect
    int width = 4; 
    return (length+width)*2;
}