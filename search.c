#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[5] = {1, 5, 4, 5, 3};
    int x = 4;
    bool flag = false; // means not present in the array
    int idx = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == x)
        {
            flag = true; // means present in the array
            idx = i;
            break;
        }
    }
    if (flag == true)
        printf("%d is present in the arrayand index is %d", x, idx);
    else
        printf("%d is not present in the array", x);
    return 0;
}