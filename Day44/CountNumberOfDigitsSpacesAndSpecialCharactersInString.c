#include <stdio.h>
void countString(char str[], int size)
{
    int space = 0;
    int digit = 0;
    int alphabet = 0;
    int specialCharacter = 0;
    for (int i = 0; i <= size - 1; i++)
    {
        if (str[i] == ' ')
        {
            space++;
        }
        else if (str[i] >= '1' && str[i] <= '9')
        {
            digit++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            alphabet++;
        }
        else
        {
            specialCharacter++;
        }
    }
    printf("Number of spaces are %d\n", space);
    printf("Number of digits are %d\n", digit);
    printf("Number of special characters are %d\n", specialCharacter);
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
    countString(str, size);
    return 0;
}
