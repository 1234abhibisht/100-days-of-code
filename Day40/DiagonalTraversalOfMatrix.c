#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    int m;
    printf("Enter number of columns : ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Enter your elements : \n");
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int i = 0;
    int j = 0;
    int resulArr[n * m];
    int idx = 0;    /* index of resulArr matrix */
    bool up = true; /* diagonally up */
    while (i <= n - 1 && j <= m - 1)
    {
        if (up == true)
        {
            while (i > 0 && j <= m - 2)
            {
                resulArr[idx] = arr[i][j];
                i--;
                j++;
                idx++;
            }
            resulArr[idx] = arr[i][j];
            idx++;
            if (j == m - 1)
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        else
        {
            while (i <= n - 2 && j > 0)
            {
                resulArr[idx] = arr[i][j];
                i++;
                j--;
                idx++;
            }
            resulArr[idx] = arr[i][j];
            idx++;
            if (i == n - 1)
            {
                j++;
            }
            else
            {
                i++;
            }
        }
        up = !up; /* interchange true to false */
    }
    /* print resultArr */
    for (int i = 0; i <= m * n - 1; i++)
    {
        printf("%d ", resulArr[i]);
    }
    return 0;
}
