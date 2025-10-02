#include <stdio.h>
int main()
{
    int arr1[3][3];
    printf("Enter first matrix : \n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    int arr2[3][3];
    printf("Enter second matrix : \n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            arr1[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("Sum of matrix 1 and matrix 2 is : \n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
