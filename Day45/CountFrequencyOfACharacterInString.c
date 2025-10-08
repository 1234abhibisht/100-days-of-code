#include <stdio.h>
void frequency(char str[], int size, char a)
{
    int frequency = 0;
    for (int i = 0; i <= size - 1; i++)
    {
        if (str[i] == a)
        {
            frequency++;
        }
    }
    printf("Frequency of %c is %d", a, frequency);
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
    char a;
    printf("Enter a character whose frequency you want : ");
    scanf(" %c", &a);
    frequency(str, size, a);
    return 0;
}
