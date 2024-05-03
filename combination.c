#include <stdio.h>
int fcatorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int combination(int n, int r)
{
    int ncr = fcatorial(n) / (fcatorial(r) * fcatorial(n - r));
    return ncr;
}
int main()
{
    int n, r;
    printf("Enter n and r ");
    scanf("%d%d", &n, &r);
    int ncr = combination(n, r);
    printf("%d", ncr);
    return 0;
}