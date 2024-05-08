#include <stdio.h>
int main()
{
    int arr[6] = {1, 5, 4, 6, 3, 7};
    int x = 4;
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        if (x < arr[i])
            count++;
    }
    printf("%d ", count);
    return 0;
}