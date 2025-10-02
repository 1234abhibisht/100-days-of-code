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
    /* add two matrix without using third matrix */
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            /* add two matrices in first input matrix only */
            arr1[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    /* print updated input matrix */
    printf("Sum of first and second matrix is : \n");
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
