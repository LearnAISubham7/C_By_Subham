#include <stdio.h>
int palindrom(int arr[]);
int main()
{
    int arr[5] = {1, 3, 3, 2, 1};
    palindrom(arr);
    if (palindrom(arr))
        printf("yes");
    else
        printf("no");
    return 0;
}
int palindrom(int arr[])
{
    int i = 0;
    int j = 4; // n-1;
    int f = 0;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            f = 1;
            break;
        }
        i++;
        j--;
    }
    if (f == 1)
        return 0;
    else
        return 1;
}
