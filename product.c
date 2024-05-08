#include <stdio.h>
int main()
{
    int arr[5] = {1, 5, 4, 6, 3};
    int product = 1;
    for (int i = 0; i < 5; i++)
    {
        product *= arr[i];
    }
    printf("%d ", product);
    return 0;
}