#include <stdio.h>
int main()
{
    int arr[5] = {1, 5, 4, 6, 3};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("%d ", sum);
    return 0;
}