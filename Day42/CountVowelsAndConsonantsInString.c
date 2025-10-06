#include <stdio.h>
#include <ctype.h>
void vowelsConstants(char str[], int size)
{
    int vowel = 0;
    int constant = 0;
    int space = 0;
    for (int i = 0; i <= size - 1; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel++;
        }
        else if (str[i] == ' ')
        {
            space++;
        }
        else
        {
            constant++;
        }
    }
    printf("Number of vowels are %d\n", vowel);
    printf("Number of consonant are %d", constant);
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
    vowelsConstants(str, size);
    return 0;
}
