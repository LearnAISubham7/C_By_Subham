#include <stdio.h>
void reverse(int arr[], int si, int ei);
int main()
{
    int n;
    printf("Enter the size of array n = ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("Enter the %d element : \n", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    int k;
    printf("how many number you rotate k = ");
    scanf("%d", &k);
    k %= n;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
void reverse(int arr[], int si, int ei)
{
    int i = si;
    int j = ei;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}