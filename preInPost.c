#include <stdio.h>
void preInPost(int n);
int main()
{
    int n;
    printf("Enter a num : ");
    scanf("%d", &n);
    preInPost(n);
    return 0;
}
void preInPost(int n)
{
    if (n == 0)
        return;
    printf("pre %d\n", n);
    preInPost(n - 1);
    printf("in %d\n", n);
    preInPost(n - 1);
    printf("post %d\n", n);
    return;
}
