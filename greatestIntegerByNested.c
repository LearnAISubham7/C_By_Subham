#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter number x : ");
    scanf("%d", &x);
    printf("Enter number y : ");
    scanf("%d", &y);
    printf("Enter number z : ");
    scanf("%d", &z);

    if (x > y)
    {
        if (x > z)
        {
            printf("x = %d is greatest", x);
        }
        else
        {
            printf("z = %d is greatest", z);
        }
    }
    else
    {
        if (y > z)
        {
            printf("y = %d is greatest", y);
        }
        else
        {
            printf("z = %d is greatest", z);
        }
    }

    return 0;
}