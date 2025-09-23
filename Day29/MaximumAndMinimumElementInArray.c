#include <stdio.h>
void maxMin(int arr[], int n)
{
    int greatest = arr[0];
    for (int i = 1; i <= n - 1; i++)
    { /* greatest element */
        if (arr[i] > greatest)
        {
            greatest = arr[i];
        }
    }
    int least = arr[0];
    for (int j = 1; j <= n - 1; j++)
    {
        if (arr[j] < least)
        {
            least = arr[j];
        }
    }
    printf("Greatest element is %d\n", greatest);
    printf("Least element is %d", least);
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
    maxMin(arr, n);
    return 0;
}
