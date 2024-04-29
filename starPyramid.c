#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    int a = n;
    int b = 1;
    for (int i = 1; i <= n; i++)
    {
        a = n - i;
        for (int j = 1; j <= a; j++) // a for spaceces
        {
            printf(" ");
        }
        for (int k = 1; k <= b; k++) // or k <= 2i-1
        {
            printf("*");
        }
        b += 2;
        printf("\n");
    }
    return 0;
}