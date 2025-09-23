#include <stdio.h>
void evenOdd(int arr[], int n)
{
    int positive = 0;
    int negative = 0;
    int zero = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > 0)
        {
            positive++;
        }
        else if (arr[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    printf("Positive elements are %d\n", positive);
    printf("Negative elemtns are %d\n", negative);
    printf("Number of zeroes are %d", zero);
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
    evenOdd(arr, n);
    return 0;
}
