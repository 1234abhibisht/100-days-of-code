#include <stdio.h>
void secondGreatest(int arr[], int n)
{
    int great = arr[0];
    int secondgreat = arr[1];
    /* if secondgreat > great, swap the values */
    if (secondgreat > great)
    {
        int temp = great;
        great = secondgreat;
        secondgreat = temp;
    }
    for (int i = 2; i <= n - 1; i++)
    {
        if (arr[i] > great)
        {
            secondgreat = great;
            great = arr[i];
        }
        else if (arr[i] < great && arr[i] > secondgreat)
        {
            secondgreat = arr[i];
        }
    }
    printf("Second greatest element is %d", secondgreat);
    return;
}
int main()
{
    int n;
    printf("Enter how many elements you want to enter : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your array : ");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    secondGreatest(arr, n);
    return 0;
}
