#include <stdio.h>
void printnto1(int n);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printnto1(n);
    return 0;
}
void printnto1(int n)
{
    if (n == 0)
        return;
    printf("%d\n", n);
    printnto1(n - 1);
    return;
}
