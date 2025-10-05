#include <stdio.h>
void insertElement(int arr[], int n, int a, int idx)
{
    /* first we have to shift elements from idx index by +1 */
    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = a;
    return;
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
    int a;
    printf("Enter a number which you want to insert : ");
    scanf("%d", &a);
    int idx;
    printf("Enter an index in which you want to insert the number : ");
    scanf("%d", &idx);
    insertElement(arr, n, a, idx);
    for (int i = 0; i <= n; i++)
    { /* now index have been incresed by 1 */
        printf("%d ", arr[i]);
    }
    return 0;
}
