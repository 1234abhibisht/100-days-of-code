#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows for first matrix : ");
    scanf("%d", &n);
    int m;
    printf("Enter number of columns for first matrix : ");
    scanf("%d", &m);
    int arr1[n][m];
    printf("Enter first matrix : \n");
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    int p;
    printf("Enter number of rows for second matrix : ");
    scanf("%d", &p);
    int q;
    printf("Enter number of columns for second matrix : ");
    scanf("%d", &q);
    int arr2[p][q];
    printf("Enter second matrix : \n");
    for (int i = 0; i <= p - 1; i++)
    {
        for (int j = 0; j <= q - 1; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    /* two matrices can only by multiple if column of first matrix is equal to
        row of second matrix */
    if (m != p)
    {
        printf("Matrices cannot be multiplied");
    }
    else
    {
        /* multiplication of two matrices */
        int reslutant[n][q];

        for (int i = 0; i <= n - 1; i++)
        {
            for (int j = 0; j <= q - 1; j++)
            {
                reslutant[i][j] = 0;
                for (int k = 0; k <= m; k++)
                {
                    reslutant[i][j] = reslutant[i][j] + arr1[i][k] * arr2[k][j];
                }
            }
        }
        printf("Multiplication of both matrices is : \n");
        for (int i = 0; i <= n - 1; i++)
        {
            for (int j = 0; j <= q - 1; j++)
            {
                printf("%d ", reslutant[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
