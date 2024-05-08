#include <stdio.h>
void fun(int arr[]);
int main()
{
    int arr[5] = {1, 5, 4, 6, 3};

    printf("%d ", arr[2]);
    fun(arr);
    printf("%d ", arr[2]);
    return 0;
}
void fun(int arr[])
{
    arr[2] = 10;
}
