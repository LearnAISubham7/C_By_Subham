#include <stdio.h>
void swap(int *x, int *y);
int main()
{
    int a = 2, b = 9;
    swap(&a, &b);
    printf("%d %d", a, b);

    return 0;
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}