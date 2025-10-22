/* John Doe -> J.D. */

#include <stdio.h>
#include <string.h>
void firstLetter(char str[], int size)
{
    printf("First intials of your name are ");
    printf("%c.", str[0]);
    for (int i = 0; i <= size - 1; i++)
    {
        /* there will be problem if user input two consecutive spaces between his name */
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            printf("%c.", str[i + 1]);
        }
    }
    return;
}
int main()
{
    char str[40];
    printf("Enter your full name : ");
    fgets(str, 40, stdin);
    str[strcspn(str, "\n")] = '\0';
    int idx = 0;
    int size = 0;
    while (str[idx] != '\0')
    {
        size++;
        idx++;
    }
    firstLetter(str, size);
    return 0;
}
