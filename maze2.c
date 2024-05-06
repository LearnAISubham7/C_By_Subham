#include <stdio.h>
int maze2(int n, int m);
int main()
{
    int n;
    printf("Enter number of rows of the maze : ");
    scanf("%d", &n);
    int m;
    printf("Enter number of column of the maze : ");
    scanf("%d", &m);
    int p = maze2(n, m);
    printf("%d", p);
    return 0;
}
int maze2(int n, int m)
{
    int rightWays = 0;
    int downWays = 0;
    if (n == 1 && m == 1)
        return 1;
    if (n == 1)
        rightWays += maze2(n, m - 1);
    if (m == 1)
        downWays += maze2(n - 1, m);
    if (n > 1 && m > 1)
    {
        rightWays += maze2(n - 1, m);
        downWays += maze2(n, m - 1);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}
