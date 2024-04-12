#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if (n<0)
    {
        printf("%d absolute value is %d",n,-n);
    }
    else{
        printf("%d absolute value is %d",n,n);
    }
    
    return 0;
}