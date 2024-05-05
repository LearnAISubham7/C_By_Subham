#include <stdio.h>
int fibo(int a);
int main()
{
    int a;
    printf("Enter a num : ");
    scanf("%d", &a);
    fibo(a);
    printf("%d", fibo(a));
    return 0;
}
int fibo(int a)
{
    if (a == 2 || a == 1)
        return 1;
    return fibo(a - 1) + fibo(a - 2);
}