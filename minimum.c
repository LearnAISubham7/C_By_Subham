#include <stdio.h>
int main()
{
    int arr[5] = {1, 5, 4, 6, 3};
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    printf("%d", min);
    return 0;
}