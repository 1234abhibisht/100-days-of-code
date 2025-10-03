#include <stdio.h>
void compareDiagonals(int arr2[], int n)
{
    /* now I will compare each element of array arr2 which contains diagonals of
       matrix and check whether they are distinct of not */
    int flag = 0;
    for (int i = 0; i <= n * 2 - 1; i++)
    {
        for (int j = i + 1; j <= n * 2 - 1; j++)
        {
            if (arr2[i] == arr2[j])
            {
                flag = 1;
                break;
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
    return;
}
int main()
{
    int n;
    printf("Enter number of rows / columns : ");
    /* square matrix */
    scanf("%d", &n);
    int arr1[n][n];
    printf("Enter your matrix : \n");
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    int arr2[n * 2];
    int k = 0; /* index of array arr2 */
    /* now I want to store diagonals of matrix into an array arr2 */
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (i == j || i + j == n - 1)
            {
                arr2[k] = arr1[i][j];
                k++;
            }
        }
    }
    compareDiagonals(arr2, n);
    return 0;
}
