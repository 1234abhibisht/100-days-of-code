/* *
   * * *
   * * * * * 
   * * * * * * * 
   * * * * * * * * *
   * * * * * * * 
   * * * * * 
   * * * 
   *          */

#include <stdio.h>
void triangle()
{
    for (int i = 1; i <= 9; i = i + 2)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int k = 7; k >= 1; k = k - 2)
    {
        for (int l = 1; l <= k; l++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return;
}
int main()
{
    triangle();
    return 0;
}
