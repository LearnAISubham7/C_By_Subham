#include <stdio.h>
int main()
{
    double x, y;
    printf("Enter value x and y : ");
    scanf("%lf%lf", &x, &y);
    if (y == 0 && x == 0)
    {
        printf("lies on the origin");
    }
    else if (x == 0)
    {
        printf("lies on the y-axis");
    }
    else if (y == 0)
    {
        printf("lies on the x-axis");
    }
    else
    {
        printf("Does NOT lies on the x-axis and y-axis nor origin");
    }
    return 0;
}