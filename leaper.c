#include<stdio.h>
int main(){
    int n;
    printf("Enter a year : ");
    scanf("%d",&n);
    if (n%4==0)
    {
        printf("%d is a leaper",n);
    }
    else{
        printf("%d is a not a leaper",n);
    }
    return 0;
}