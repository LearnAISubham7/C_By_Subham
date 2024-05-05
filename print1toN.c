#include <stdio.h>
void print1toN(int x, int n);
int main()
{
    int n;
    printf("Enter a no : ");
    scanf("%d", &n);
    print1toN(1, n);
    return 0;
}
void print1toN(int x, int n)
{
    if (x > n)
        return;
    printf("%d\n", x);
    print1toN(x + 1, n);
    return;
}