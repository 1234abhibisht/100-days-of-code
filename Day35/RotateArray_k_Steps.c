#include <stdio.h>
void rotateRight(int arr[], int i, int j)
{
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
int main()
{
    int n;
    printf("Enter how many elements you want to enter : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your array : ");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter how many time you want to rotate array : ");
    scanf("%d", &k);
    /* first we will reverse whole array */
    rotateRight(arr, 0, n - 1);
    /* then we will reverse first k elements */
    rotateRight(arr, 0, k - 1);
    /* now we will reverse remaining elements */
    rotateRight(arr, k, n - 1);
    printf("Array after rotating %d times is : \n", k);
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
