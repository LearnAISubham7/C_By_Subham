#include <stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("%d", fact);
    return 0;
}
int factorial(int n)
{
    if (n == 0)
        return 1;
    int recAns = n * factorial(n - 1);
    return recAns;
}