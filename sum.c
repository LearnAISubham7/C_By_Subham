#include <stdio.h>
void sum(int n, int s);
int main()
{
    int n;
    printf("Enter a num : ");
    scanf("%d", &n);
    sum(n, 0);
    return 0;
}
void sum(int n, int s)
{
    if (n == 0)
    {
        printf("%d", s);
        return;
    }
    sum(n - 1, n + s);
    return;
}