#include <stdio.h>
int main()
{
    int arr[5] = {1, 4, 3, 6, 2};
    int brr[5];
    for (int i = 0; i < 5; i++)
    {
        brr[i] = arr[4 - i];
        // arr[i]=brr[i];
        printf("%d ", brr[i]); // print arr[i];
    }
    return 0;
}