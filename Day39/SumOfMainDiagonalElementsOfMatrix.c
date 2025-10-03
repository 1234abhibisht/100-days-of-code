#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows / columns of square matrix : ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter your matrix : \n");
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    /* sum of main diagonal elements */
    int sum = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (i == j)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    printf("Sum of main diagonal elements of matrix is %d", sum);
    return 0;
}
