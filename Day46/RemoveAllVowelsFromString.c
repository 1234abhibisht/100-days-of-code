#include <stdio.h>
void removeVowel(char str[], int size)
{
    int j = 0;
    for (int i = 0; i <= size - 1; i++)
    {
        /* input each character in ch one by one */
        char ch = str[i];
        /* check whether ch is vowel or consonant */
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')
        {
            /* if ch is consonant put it in same string from zero index */
            str[j] = ch;
            j++;
        }
    }
    /* terminate the string after checking all consonants */
    str[j] = '\0';
    printf("String without vowel is %s", str);
    return;
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
    removeVowel(str, size);
    return 0;
}
