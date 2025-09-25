#include <stdio.h>
void searchArray(int arr[], int n, int a)
{
    int found = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == a)
        {
            printf("%d is found at index %d ", a, i);
            found = 1;
        }
    }
    /* i have created a variable name found and initialize it with 0
       if that element is present in array then found will be 1 and index will be printed,
       but if that element is not present in array then found will remain zero*/
    if (found == 0)
    {
        printf("%d is not found in array", a);
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
    int a;
    printf("Enter a number which you want to search : ");
    scanf("%d", &a);
    searchArray(arr, n, a);
    return 0;
}
