#include <stdio.h>
void Sum(int arrSum[], int n)
{
    int sum = 0;
    for (int j = 0; j <= n - 1; j++)
    {
        sum = sum + arrSum[j];
    }
    printf("Sum of all elements of array is %d", sum);
    return;
}
int main()
{
    int n;
    printf("How many numbers you want to enter : ");
    scanf("%d", &n);
    int arrSum[n];
    printf("Enter your numbers : ");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arrSum[i]);
    }
    Sum(arrSum, n);
    return 0;
}
