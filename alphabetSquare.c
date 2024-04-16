#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1; // a = 65
        for (int j = 1; j <= n; j++)
        {
            int d = a + 64;    // //
            char ch = (char)d; // //
            printf("%c ", d);  // ,a
            a++;
        }
        printf("\n");
    }
    return 0;
}