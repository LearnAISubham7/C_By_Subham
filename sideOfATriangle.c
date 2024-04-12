#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter 1st side : ");
    scanf("%d", &x);
    printf("Enter 2nd side : ");
    scanf("%d", &y);
    printf("Enter 3rd side : ");
    scanf("%d", &z);

    if ((x + y) > z && (x + z) > y && (y + z) > x)
    {
        printf("x = %d, y = %d, z = %d, are the side of a triangle", x, y, z);
    }
    else
    {
        printf("x = %d, y = %d, z = %d, are NOT the side of a triangle", x, y, z);
    }

    return 0;
}