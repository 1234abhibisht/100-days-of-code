#include <stdio.h>
#include <stdbool.h>
void spacesHiphen(char str[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '-';
        }
    }
    printf("%s", str);
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
    spacesHiphen(str, size);
    return 0;
}
