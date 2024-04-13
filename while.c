#include <stdio.h>
int main()
{
    // int i = 1;
    // while (i <= 100)
    //     ;
    // {
    //     printf("%d ", i);
    //     i++;
    // }
    // int x = 4, y, z;
    // y = --x;
    // z = x--;
    // printf("\n%d%d%d", x, y, z);
    int x = 4, y = 0, z;
    while (x >= 0)
    {
        if (x == y)
        {
            break;
        }
        else
        {
            printf("\n%d%d", x, y);
        }
        x--;
        y++;
    }

    return 0;
}