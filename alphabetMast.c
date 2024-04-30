#include <stdio.h>
int main()
{
    int n;
    printf("Enter row number : ");
    scanf("%d", &n);
    int nst = n;
    int nsp = 1;
    for (int m = 1; m <= 2 * n + 1; m++)
    {
        printf("%c ", m + 64);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%c ", a + 64);
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
            a++;
        }
        for (int l = 1; l <= nst; l++)
        {
            printf("%c ", a + 64);
            a++;
        }
        nsp += 2;
        nst--;
        printf("\n");
    }
    return 0;
}