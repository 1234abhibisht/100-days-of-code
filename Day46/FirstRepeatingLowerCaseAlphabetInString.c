/* we are given a string, find first lower case alphabet which is repeating twice or more */

#include <stdio.h>
#include <stdbool.h>
int firstRepeatingElement(char str[], int size)
{
    char x;
    bool flag = false;
    for (int i = 0; i <= size - 1; i++)
    {
        for (int j = i + 1; j <= size - 1; j++)
        {
            if (str[i] == str[j])
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                    x = str[i];
                    return x; /* if repeating alphabet exists in array */
                }
            }
        }
    }
    return '0';  /* if repeating alphabet does not exist in array */
    /* I have return '0' because variable which called this function is of char datatype, so I need 
       to return a character */
}
int main()
{
    char str[40];
    printf("Enter your string : ");
    scanf("%[^\n]s", &str);
    int i = 0;
    int size = 0;
    while (str[i] != '\0')
    {
        size++;
        i++;
    }
    char result = firstRepeatingElement(str, size);
    if (result == '0')
    {
        printf("No repeating lower case alphabet found");
    }
    else
    {
        printf("First repeating lower case alphabet is %c", result);
    }
    return 0;
}
