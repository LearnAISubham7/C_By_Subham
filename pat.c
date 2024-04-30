#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    int nsp = 1;
    int nst = n;

    for (int m = 1; m <= 1; m++)
    {
        int b = 1;
        for (int i = 1; i < n + 1; i++)
        {
            printf("%d", b);
            b++;
        }
        for (int j = 1; j <= n + 1; j++)
        {
            printf("%d", b);
            b--;
        }
    }

    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%d", a);
            a++;
        }
        a--;
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        for (int l = 1; l <= nst; l++)
        {
            printf("%d", a);
            a--;
        }
        nsp += 2;
        nst--;
        printf("\n");
    }
    return 0;
}