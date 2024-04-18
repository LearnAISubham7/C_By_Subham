#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a;
        for (int j = 1; j <= n; j++)
        {
            a = i + j - 1;        //
            if (i == j || a == n) // i+j==n+1
            {
                printf("*");
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