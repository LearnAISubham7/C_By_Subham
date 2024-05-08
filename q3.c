#include <stdio.h>
int main()
{
    int arr[6] = {1, 9, 5, 6, 2, 7};
    int totalPairs = 0;
    int x = 12;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            for (int k = j + 1; k < 6; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    totalPairs++;
                    printf("%d,%d,%d\n", i, j, k);
                }
            }
        }
    }
    printf("totalPairs = %d", totalPairs);
    return 0;
}