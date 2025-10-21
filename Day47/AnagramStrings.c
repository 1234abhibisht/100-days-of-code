#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void anargamStrings(char str1[], char str2[], int size1, int size2)
{
    /* if size of both strings are not same then they are not anargams */
    if (size1 != size2)
    {
        printf("Strings are not anargam");
    }
    else
    {
        bool flag = true;
        for (int i = 0; i <= size1 - 1; i++) /* works only if both strings are of same size */
        {
            if (str1[i] != str2[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            printf("Strings are not anargam");
        }
        else
        {
            printf("Strings are anargam");
        }
    }
    return;
}
int main()
{
    /* input first string */
    char str1[40];
    printf("Enter first string : ");
    fgets(str1, 40, stdin);
    str1[strcspn(str1, "\n")] = '\0'; // remove newline

    /* input second string */
    char str2[40];
    printf("Enter second string : ");
    fgets(str2, 40, stdin);
    str2[strcspn(str2, "\n")] = '\0'; // remove newline

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

    /* now we will bubble sort first string */
    for (int i = 0; i <= size1 - 2; i++)
    {
        for (int j = 0; j <= size1 - 2 - i; j++)
        {
            if (str1[j] > str1[j + 1])
            {
                int temp1 = str1[j];
                str1[j] = str1[j + 1];
                str1[j + 1] = temp1;
            }
        }
    }

    /* bubble sort second string */
    for (int i = 0; i <= size2 - 2; i++)
    {
        for (int j = 0; j <= size2 - 2 - i; j++)
        {
            if (str2[j] > str2[j + 1])
            {
                int temp2 = str2[j];
                str2[j] = str2[j + 1];
                str2[j + 1] = temp2;
            }
        }
    }

    /* pass both sorted string in function */
    anargamStrings(str1, str2, size1, size2);
    return 0;
}
