#include<stdio.h>
int main(){
    float n;
    printf("Enter a freactional number : ");
    scanf("%f",&n);//7.18
    int x = n;//7
    n = n-x;//0.180000
    printf("fractional part of the number is %f",n);
    
    return 0;
}