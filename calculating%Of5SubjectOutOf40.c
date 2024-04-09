#include<stdio.h>

int main(){

    float physics,chemistry,math,english,bengali;
    printf("Enter your physics marks = ");
    scanf("%f",&physics);//32
    printf("Enter your chemistry marks = ");
    scanf("%f",&chemistry);//34
    printf("Enter your math marks = ");
    scanf("%f",&math);//33
    printf("Enter your english marks = ");
    scanf("%f",&english);//31
    printf("Enter your bengali marks = ");
    scanf("%f",&bengali);//37

    float average = (physics+chemistry+math+english+bengali)/5;//72.000000
    float percentage = average *2.5; //83.500000
    printf("percentage = %f",percentage);

    
    return 0;
}