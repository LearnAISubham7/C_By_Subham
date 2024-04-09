#include<stdio.h>

int main(){

    float r;
    float pi = 3.141592;
    printf("To calculate volume of a sphere enter radius = ");
    scanf("%f",&r);//7
    float v = 4*pi*r*r*r/3;
    printf("Volume of a sphere = %f",v);//1436.754761
    
    return 0;
}