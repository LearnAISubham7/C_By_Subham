#include<stdio.h>

int main(){

    int x = 7;
    printf("x = %d\n",x); //x = 7
    x = 18;
    printf("x = %d\n",x); //x = 18
    x = x + 10;
    printf("x = %d\n",x); //x = 28
    x = x - 45;
    printf("x = %d\n",x); //x = -17
    
    return 0;
}