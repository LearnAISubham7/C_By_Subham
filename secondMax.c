#include <stdio.h>
int main()
{
    int arr[5] = {1, 5, 8, 3, 7};
    int max = arr[0];
    int smax = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            smax = max;
            max = arr[i];
        }
        else if (smax < arr[i] && max != arr[i])
            smax = arr[i];
    }
    printf("%d", smax);
    return 0;
}