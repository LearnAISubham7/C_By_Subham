// print the sum of this series : 1-2+3-4+5-6...upto 'n'.
#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter a number : ");
    scanf("%d", &n);
    sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         sum = sum - i;
    //     }
    //     else
    //     {
    //         sum = sum + i;
    //     }
    // }

    // much better code start is below the line.
    if (n % 2 == 0)
    {
        sum = -(n / 2);
    }
    else
    {
        sum = -(n / 2) + n;
    }

    printf("%d ", sum);
    return 0;
}