#include<stdio.h>
int main(){

    float principle,rate,time,simpleInterest;
    printf("Enter principle amount : ");
    scanf("%f",&principle);//100
    printf("Enter rate of interest : ");
    scanf("%f",&rate);//10
    printf("Enter time(years) : ");
    scanf("%f",&time);//2
    simpleInterest = (principle*rate*time)/100;//20.000000
    printf("simple interest is %f",simpleInterest);

    return 0;
}