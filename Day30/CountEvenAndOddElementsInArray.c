#include <stdio.h>
void evenOdd(int arr[], int n)
{
    int even = 0;
    int odd = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even elements are %d\n", even);
    printf("Odd elements are %d", odd);
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
