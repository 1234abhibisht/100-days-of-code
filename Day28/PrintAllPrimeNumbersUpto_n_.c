#include <stdio.h>
int prime(int a)
{
    for (int i = 2; i <= a - 1; i++)
    {
        if (a % i == 0)
        { /* composite number */
            return 0;
        }
        else
        {
            return a; /* prime number */
        }
    }
}
void primeNumberseries(int n)
{ /* first n numbers prime check */
    for (int j = 2; j <= n + 1; j++)
    {
        int x = prime(j);
        if (x != 0)
        {
            printf("%d ", x);
        }
    }
    return;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    primeNumberseries(n);
    return 0;
}
