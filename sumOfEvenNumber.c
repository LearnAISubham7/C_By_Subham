#include <stdio.h>
int main()
{
    int n, lastDegit;
    printf("Enter a number : ");
    scanf("%d", &n);
    int sum = 0;
    while (n > 0)
    {
        lastDegit = n % 10;
        if (lastDegit % 2 == 0) // if odd then condition = (lastDegit % 2 != 0)
        {
            sum = sum + lastDegit;
        }
        n /= 10;
    }
    printf("The sum of digit is %d", sum);

    return 0;
}