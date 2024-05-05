#include <stdio.h>
int power(int a, int b);
int main()
{
    int a;
    printf("Enter a num : ");
    scanf("%d", &a);
    int b;
    printf("Enter a num : ");
    scanf("%d", &b);
    int p = power(a, b);
    printf("%d", p);
    return 0;
}
int power(int a, int b)
{
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}