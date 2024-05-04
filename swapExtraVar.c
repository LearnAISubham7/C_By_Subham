#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter 2 n0. ");
    scanf("%d%d", &x, &y);
    int temp = x;
    x = y;
    y = temp;
    printf("%d %d", x, y);

    return 0;
}
