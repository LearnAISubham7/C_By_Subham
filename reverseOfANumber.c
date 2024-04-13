#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : "); // 1234
    scanf("%d", &n);
    int reverse = 0;
    while (n > 0)
    {
        reverse *= 10; // if i put this linr interchange into 11th line than 1 extra zero is added .
        reverse = reverse + (n % 10);
        n /= 10;
    }
    printf("The reverse of digit is %d", reverse);

    return 0;
}