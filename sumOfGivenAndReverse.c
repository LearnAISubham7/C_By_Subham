#include <stdio.h>
int main()
{
    int n, number;
    printf("Enter a number : "); // 1234
    scanf("%d", &n);
    int reverse = 0;
    number = n;
    while (n > 0)
    {
        reverse *= 10;
        reverse = reverse + (n % 10);
        n /= 10;
    }
    printf("The sum of given and reverse number is %d+%d=%d", number, reverse, number + reverse);

    return 0;
}