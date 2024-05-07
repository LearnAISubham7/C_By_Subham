#include <stdio.h>
int main()
{
    int sub[5] = {1, 5, 4, 6, 3};
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", &sub[i]);
    }
    return 0;
}