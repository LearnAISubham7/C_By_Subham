// display this GP - 2,4,8,16,32....... upto 'n' terms.
#include <stdio.h>
int main()
{
    int n, a;
    printf("Enter a number : ");
    scanf("%d", &n);
    a = 1;
    for (int i = 1; i <= 2 * n - 1; i += 2)
    {
        printf("%d ", a);
        a *= 2;
    }
}