#include <stdio.h>
int min(int a, int b);
int gcd(int a, int b);
int main()
{
    int a;
    printf("Enter 1st num : ");
    scanf("%d", &a);
    int b;
    printf("Enter 2nd num : ");
    scanf("%d", &b);
    int hcf = gcd(a, b);
    printf("the hcf/gcd of %d and %d is : %d", a, b, hcf);
    return 0;
}
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int gcd(int a, int b)
{
    int hcf;
    for (int i = 1; i <= min(a, b); i++) // or i = min(a,b);i>=1;i--
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
            // break;
        }
    }
    return hcf;
}
