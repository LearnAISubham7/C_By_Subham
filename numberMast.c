#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    int nst = n;
    int nsp = 1;
    for (int k = 1; k <= 2 * n + 1; k++)
    {
        printf("%d", k);
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
        for (int l = 1; l <= nsp; l++)
        {
            printf(" ");
            a++;
        }
        for (int j = 1; j <= nst; j++)
        {
            printf("%d", a);
            a++;
        }
        nsp += 2;
        nst--;
        printf("\n");
    }
    return 0;
}