#include<stdio.h>

int main(){

    float physics,chemistry,math,english,bengali;
    printf("Enter your physics marks = ");
    scanf("%f",&physics);//64
    printf("Enter your chemistry marks = ");
    scanf("%f",&chemistry);//66
    printf("Enter your math marks = ");
    scanf("%f",&math);//73
    printf("Enter your english marks = ");
    scanf("%f",&english);//76
    printf("Enter your bengali marks = ");
    scanf("%f",&bengali);//81

    float percentage = (physics+chemistry+math+english+bengali)/5;//72.000000
    printf("percentage = %f",percentage);

    
    return 0;
}