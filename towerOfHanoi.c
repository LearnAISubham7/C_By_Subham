#include <stdio.h>
void tOH(int n, char s, char h, char d);
int main()
{
    int n;
    printf("Enter a num : ");
    scanf("%d", &n);
    tOH(n, 'A', 'B', 'C');
    return 0;
}
void tOH(int n, char s, char h, char d)
{
    if (n == 0)
        return;
    tOH(n - 1, s, d, h);
    printf("%c -> %c\n", s, d);
    tOH(n - 1, h, s, d);
    return;
}
