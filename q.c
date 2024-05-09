#include <stdio.h>
int main()
{
    int r;
    printf("Enter no. of students : ");
    scanf("%d", &r);
    int c;
    printf("Enter no. of subject : ");
    scanf("%d", &c);
    int arr[r][c];
    printf("write the roll no. and number");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) //  brcause roll no +markes
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) //
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}