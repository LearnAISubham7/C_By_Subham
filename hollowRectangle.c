#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    printf("Enter number of column : ");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (n == 1 || m == 1 || n == 4 || m == 6)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}