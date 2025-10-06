#include <stdio.h>
void upperString(char str[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        /* we can subtract a number from a character stored in a variable, it will subract its ascii
        value, so when we again print that variable, character with new ascii value will be printed */
    }
    printf("%s", str);
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
    upperString(str, size);
    return 0;
}
