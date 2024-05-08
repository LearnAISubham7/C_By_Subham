#include <stdio.h>
void reverse(int arr[]);
int main()
{
    int arr[5] = {1, 4, 3, 6, 2};
    reverse(arr);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
void reverse(int arr[])
{
    int i = 0;    // for(int i = 0 ,j = 4; i < j; i++,j--)
    int j = 4;    //
    while (i < j) //
    {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
        i++; //
        j--; //
    }
    return;
}