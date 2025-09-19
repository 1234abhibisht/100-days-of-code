#include <stdio.h>
void starRectangle(int n)
{
    for (int i = 1; i <= n; i++)
    { /* for horizontal row */
        for (int j = 1; j <= n; j++)
        { /* for vertical column */
            printf("* ");
        }
        printf("\n");
    }
    return;
}
int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    starRectangle(n);
    return 0;
}
