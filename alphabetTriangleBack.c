#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    int a = n;
    for (int i = 1; i <= n; i++)
    {
        a = n - i;
        for (int j = 1; j <= a; j++) // a for spaceces
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%c", k + 64);
        }
        printf("\n");
    }
    return 0;
}