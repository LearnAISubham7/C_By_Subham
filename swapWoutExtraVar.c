#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter 2 n0. ");
    scanf("%d%d", &x, &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("%d %d", x, y);

    return 0;
}
