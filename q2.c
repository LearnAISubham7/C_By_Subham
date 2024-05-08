#include <stdio.h>
int main()
{
    int arr[6] = {1, 9, 5, 6, 3, 7};
    int totalPairs = 0;
    int x = 12;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                totalPairs++;
                printf("%d,%d\n", i, j);
            }
        }
    }
    printf("totalPairs = %d", totalPairs);
    return 0;
}