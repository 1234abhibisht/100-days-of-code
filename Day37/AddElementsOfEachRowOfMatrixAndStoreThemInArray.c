Add Elements Of Each Row Of Matrix And Store Them In Array

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    int m;
    printf("Enter number of columns : ");
    scanf("%d", &m);
    int arr[n][m];
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    /* create an array to store sum of each row */
    int arrSum[n];
    int x = 0; /* index of array */
    /* sum of each row of matrix */
    for (int i = 0; i <= n - 1; i++)
    {
        int sum = 0;
        for (int j = 0; j <= m - 1; j++)
        {
            sum = sum + arr[i][j];
        }
        arrSum[x] = sum;
        x++;
    }
    printf("Array containing sum of each row of matrix is : ");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arrSum[i]);
    }
    return 0;
}
