#include <stdio.h>
void arrayReverse(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i != j)
    { /* swapped elements of array */
        int x = arr[i];
        arr[i] = arr[j];
        arr[j] = x;
        i++;
        j--;
    }
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return;
}
int main()
{
    int n;
    printf("How many numbers you want to enter : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your numbers : ");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    arrayReverse(arr, n);
    return 0;
}
