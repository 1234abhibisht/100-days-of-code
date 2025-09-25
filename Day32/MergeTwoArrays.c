#include <stdio.h>
void mergeArrays(int arr1[], int arr2[], int n, int m)
{
    int arr3[m + n];
    for (int a = 0; a <= n - 1; a++)
    {
        arr3[a] = arr1[a];
    }
    for (int b = 0; b <= m - 1; b++)
    {
        arr3[n + b] = arr2[b];
    }
    printf("Merged array : ");
    for (int k = 0; k <= m + n - 1; k++)
    {
        printf("%d ", arr3[k]);
    }
    return;
}
int main()
{
    int n;
    printf("How many numbers you want to enter in first array : ");
    scanf("%d", &n);
    int m;
    printf("How many numbers you want to enter in second array : ");
    scanf("%d", &m);
    int arr1[n];
    printf("Enter your numbers in first array : ");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int arr2[m];
    printf("Enter your numbers in second array : ");
    for (int j = 0; j <= m - 1; j++)
    {
        scanf("%d", &arr2[j]);
    }
    mergeArrays(arr1, arr2, n, m);
    return 0;
}
