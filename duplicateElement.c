#include <stdio.h>
int main()
{
    int arr[6] = {1, 9, 5, 6, 6, 7};
    int duplicate = 0;
    int x = 12;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate++;
                printf("%d,%d is the indexes of the duplicate elements and element is %d \n", i, j, arr[i]);
            }
        }
    }
    printf("duplicate pair element is = %d", duplicate);
    return 0;
}