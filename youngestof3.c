#include <stdio.h>
int main()
{
    int ram, sam, subham;
    printf("Enter ram age : ");
    scanf("%d", &ram);
    printf("Enter sam age : ");
    scanf("%d", &sam);
    printf("Enter subham age : ");
    scanf("%d", &subham);

    if (ram < sam && ram < subham)
    {
        printf("ram is youngest");
    }
    else if (sam < ram && sam < subham)
    {
        printf("sam is youngest");
    }
    else
    {
        printf("subham is youngest");
    }

    return 0;
}