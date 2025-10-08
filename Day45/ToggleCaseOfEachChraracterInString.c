/* convert lower case to upper case and vice versa */
#include <stdio.h>
void toggleCase(char str[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("%s", str);
    return;
}
int main()
{
    char str[40];
    printf("Enter your string : ");
    scanf("%[^\n]s", &str);
    /* size of string */
    int i = 0;
    int size = 0;
    while (str[i] != '\0')
    {
        size++;
        i++;
    }
    toggleCase(str, size);
    return 0;
}
