/* Symmetricity of matrix can be applied only in square matrix */

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows / columns : ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter matrix : \n");
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
    return 0;
}
