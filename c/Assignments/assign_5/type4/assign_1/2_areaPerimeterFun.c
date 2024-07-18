#include<stdio.h>
const float PI = 3.14;
double areaofReact(int,int);
double perimeterOfReact(int,int);
double areaofCirle(int);
double perimeterOfCircle(int);
void main(){
    
        printf("area of circle: %.lf \n",areaofCirle(5));
        printf("perimeter of circle: %lf \n",perimeterOfCircle(7));
        printf("preimeter of reactangle: %lf \n",perimeterOfReact(4,6));
        printf("area of reactangle: %lf\n",areaofReact(8,12));
}

double areaofCirle(int radius){   
return PI*(radius*radius);

}

double perimeterOfCircle(int radius){
   
 return 2*PI*radius;
 
 }

double areaofReact(int length,int width){
    
   return length * width;
}
double perimeterOfReact(int length,int width ){
     
   return (length+width)*2;
}