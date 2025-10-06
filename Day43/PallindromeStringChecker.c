#include <stdio.h>
#include <stdbool.h>
void pallindromeString(char str[], int size)
{
    bool flag = true;
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            flag = false;
            break;
        }
        i++;
        j--;
    }
    if (flag == true)
    {
        printf("String is pallindrome");
    }
    else
    {
        printf("String is not pallindrome");
    }
    return;
}
int main()
{
    char str[40];
    printf("Enter your string : ");
    scanf("%[^\n]s", &str);
    /* count number of digits */
    int size = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        size++;
        i++;
    }
    pallindromeString(str, size);
    return 0;
}
