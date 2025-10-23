#include <stdio.h>
#include <string.h>
void longestWord(char str[], int size)
{
    char arr1[40];
    int idxarr1 = 0;
    char arr2[40];
    int currentLength = 0;
    int maxLength = 0;
    for (int i = 0; i <= size; i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            arr1[idxarr1] = str[i];
            currentLength++;
            idxarr1++;
        }
        else
        {
            arr1[idxarr1] = '\0';
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
                strcpy(arr2, arr1);
            }
            currentLength = 0;
            idxarr1 = 0;
        }
    }
    printf("Longest word is %s", arr2);
    return;
}
int main()
{
    char str[40];
    printf("Enter your sentence : ");
    fgets(str, 40, stdin);
    str[strcspn(str, "\n")] = '\0';
    int idx = 0;
    int size = 0;
    while (str[idx] != '\0')
    {
        size++;
        idx++;
    }
    longestWord(str, size);
    return 0;
}
