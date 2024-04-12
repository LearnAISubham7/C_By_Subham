#include <stdio.h>
int main()
{
    double x1, y1, x2, y2, x3, y3, m1, m2;
    printf("Enter all point : ");
    scanf("%lf%lf%lf%lf%lf%lf)", &x1, &y1, &x2, &y2, &x3, &y3);
    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);
    if (m1 == m2)
    {
        printf("all point lie in a stright line");
    }
    else
    {
        printf("all point NOT lie in a stright line");
    }

    return 0;
}