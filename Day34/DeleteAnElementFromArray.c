#include <stdio.h>
void deleteElement(int arr[], int n, int idx)
{
    /* condition check */
    if (idx < 0 || idx >= n)
    {
        printf("Invalid Operation");
        return;
    }
    /* delete an element */
    for (int i = idx + 1; i <= n - 1; i++)
    {
        arr[i - 1] = arr[i];
    }
    /* print new array */
    for (int i = 0; i <= n - 2; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    printf("Enter number of elemetns you want to enter : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your array : ");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int idx;
    printf("Enter an index from which you want to delete the number : ");
    scanf("%d", &idx);
    deleteElement(arr, n, idx);
    return 0;
}
