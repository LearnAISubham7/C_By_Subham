#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int f1 = 1, f2 = 1, sum = 1;     // if sum is 0 than oue first and second fibonacci is 0 but we know thats not 0 there are 1 and 1 .
    for (int i = 1; i <= n - 2; i++) // n-2 cause here our fibonacci start with 3rd term .
    {
        sum = f1 + f2;
        f1 = f2;
        f2 = sum;
    }
    printf("the %dth fibonacci is %d\n", n, sum);

    return 0;
}