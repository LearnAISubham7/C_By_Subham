#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter element no %d ", i);
        scanf("%d ", &arr[i]);
    }
    for (int j = 4; j >= 0; j--)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}