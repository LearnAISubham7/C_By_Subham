#include <stdio.h>
int main()
{
    int n;
    printf("Enter row number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                int d = a + 64;
                char ch = (char)d;
                printf("%c ", d);
                a++;
            }
            else
            {
                printf("%d ", a);
                a++;
            }
        }
        printf("\n");
    }
}