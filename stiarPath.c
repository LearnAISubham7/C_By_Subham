#include <stdio.h>
int stiar(int a);
int main()
{
    int a;
    printf("Enter a num : ");
    scanf("%d", &a);
    int x = stiar(a);
    printf("%d", x);
    return 0;
}
int stiar(int a)
{
    if (a == 2 || a == 1)
        return a;
    if (a == 3)
        return 4;
    return stiar(a - 1) + stiar(a - 2) + stiar(a - 3);
}