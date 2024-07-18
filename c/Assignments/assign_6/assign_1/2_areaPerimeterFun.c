#include<stdio.h>
const float PI = 3.14;
void areaofReact(int*,int*);
void perimeterOfReact(int*,int*);
void areaofCirle(int*);
void perimeterOfCircle(int*);
void main(){
    int r = 7;
    
        areaofCirle(&r);
       perimeterOfCircle(&r);
       perimeterOfReact(5,25);
        areaofReact(25,41);
}

void areaofCirle(int *radius){
    
    printf("area of circle: %.lf \n", PI*((*radius)*(*radius)));

}

void perimeterOfCircle(int *radius){
   
     printf("perimeter of circle: %lf \n", 2*PI*(*radius));
}

void areaofReact(int *length,int *width){
    
    printf("area of reactangle: %lf\n", (*length) * (*width));
}
void perimeterOfReact(int *length,int *width ){
     
    printf("preimeter of reactangle: %lf \n", (*length+(*width))*2);
}