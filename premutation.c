#include <stdio.h>
int permutation(int n, int r);
int factorial(int n);
int main()
{
    int n, r;
    printf("Enter n and r : ");
    scanf("%d%d", &n, &r);
    int npr = permutation(n, r);
    printf("%d", npr);
    return 0;
}
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int permutation(int n, int r)
{
    int npr = factorial(n) / factorial(n - r);
    return npr;
}