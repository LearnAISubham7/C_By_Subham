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
    int n;
    printf("Enter n ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            int icj = combination(i, j);
            printf("%d ", icj);
        }
        printf("\n");
    }
    return 0;
}
