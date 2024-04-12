#include <stdio.h>
int main()
{
    float n;
    printf("Enter your marks to check greade : ");
    scanf("%f", &n);
    if (n > 100)
    {
        printf("check it correctly i think you putted wrong data");
    }
    else if (n > 90 && n <= 100)
    {
        printf("Excellent");
    }
    else if (n > 80)
    {
        printf("Very Good");
    }
    else if (n > 70)
    {
        printf("Good");
    }
    else if (n > 60)
    {
        printf("Can Do Better");
    }
    else if (n > 50)
    {
        printf("Avareage");
    }
    else if (n >= 40)
    {
        printf("Bellow Avareage");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}