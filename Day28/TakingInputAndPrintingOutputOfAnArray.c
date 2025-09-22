#include <stdio.h>
int main()
{
    int n;
    printf("Enter how many numbers you want to enter : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your numbers : ");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
