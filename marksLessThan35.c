#include <stdio.h>
int main()
{
    int n;
    printf("how many number of this array is this : ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("index %d is : \n", i);
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < n; j++)
    {
        if (a[j] < 35)
            printf("%d ", j);
    }

    return 0;
}