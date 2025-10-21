/* check rotation by 2 steps */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void rotateStr(char str1[], int i, int j)
{
    while (i < j)
    {
        int temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{

    /* input first string */
    char str1[40];
    printf("Enter first string : ");
    fgets(str1, 40, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    /* input second string */
    char str2[40];
    printf("Enter second string : ");
    fgets(str2, 40, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    /* size of first string */
    int idx1 = 0;
    int size1 = 0;
    while (str1[idx1] != '\0')
    {
        size1++;
        idx1++;
    }

    /* size of second string */
    int idx2 = 0;
    int size2 = 0;
    while (str2[idx2] != '\0')
    {
        size2++;
        idx2++;
    }

    /* now rotate first string by 2 steps */

    /* first rotate whole string */
    rotateStr(str1, 0, size1 - 1);

    /* now rotate only first two elements */
    rotateStr(str1, 0, 1);

    /* now rotate remaining elements */
    rotateStr(str1, 2, size1 - 1);

    /* now check whether rotated first string is equal to second string */
    if (size1 != size2)
    {
        /* if sizes are not equal they are already rejected */
        printf("Not rotation");
    }
    else
    {
        /* if sizes are equal then check whether after rotation they are equal or not */
        bool flag = true;
        for (int i = 0; i <= size1 - 1; i++)
        {
            if (str1[i] != str2[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            printf("Not rotated");
        }
        else
        {
            printf("Rotated");
        }
    }
    return 0;
}
