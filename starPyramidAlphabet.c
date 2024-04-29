#include <stdio.h>
int main()
{
    int n;
    printf("Enter row no :");
    scanf("%d", &n);
    int a = n, b = 1;
    for (int i = 1; i <= n; i++)
    {
        a = n - i;
        for (int j = 1; j <= a; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= b; k++)
        {
            printf("%d", k);
        }
        b += 2;
        printf("\n");
    }
    return 0;
}