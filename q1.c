#include <stdio.h>
int main()
{
    int arr[6] = {1, 9, 4, 6, 3, 7};
    int sumEven = 0;
    int sumOdd = 0;
    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
            sumEven += arr[i];
        else
            sumOdd += arr[i];
    }
    printf("%d ", sumEven - sumOdd);
    return 0;
}