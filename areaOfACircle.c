#include<stdio.h>

int main(){

    float r;
    float pi = 3.141592;
    printf("To calculate Area of a circle enter radius = "); 
    scanf("%f",&r); //7
    float a = pi*r*r;
    printf("Volume of a sphere = %f",a); //153.938004
    
    return 0;
}