#include<stdio.h>

int main(){

    int x = 7;
    int y = 2;
    printf("%d\n", x+y); //9
    printf("%d\n", x-y); //5
    printf("%d\n", x*y); //14
    printf("%d\n", x/y); //3 //because integer value                                        **difference
    printf("%d\n", x%y); //1 // % called modulues operater ti determine reminder.
    
    float p = 7; // consider as p = 7.000000
    float q = 2; // consider as q = 2.000000
    printf("%f\n", p+q); //9.000000
    printf("%f\n", p-q); //5.000000
    printf("%f\n", p*q); //14.000000
    printf("%f\n", p/q); //3.500000 //because float value                                   **difference          
    

    return 0;
}