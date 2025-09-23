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
    int nst = 1;
    int nst1 = 7;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("* ");
        }
        nst += 2;
        printf("\n");
    }
    for (int k = 1; k <= 4; k++)
    {
        for (int l = 1; l <= nst1; l++)
        {
            printf("* ");
        }
        nst1 -= 2;
        printf("\n");
    }
    return;
}
int main()
{
    triangle();
    return 0;
}
