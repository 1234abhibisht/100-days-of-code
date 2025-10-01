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
    /* loop to find transpose of matrix */
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= m - 1; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    /* after transpose rows will be columns and columns will be rows */
    printf("Transpose of matrix is : \n");
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
