#include <stdio.h>
int main()
{
    int n, a, d;
    printf("Enter first term : ");
    scanf("%d", &a);
    printf("Enter common difference in multiplicative term : ");
    scanf("%d", &d);
    printf("Enter upto which term you want to print : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a *= d;
    }
}