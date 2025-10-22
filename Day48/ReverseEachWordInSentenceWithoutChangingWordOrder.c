/* I love coding  -> I evol gnidoc */

#include <stdio.h>
#include <string.h>
void reverseWord(char str[], int a, int b)
{
    while (a < b)
    {
        int temp = str[a];
        str[a] = str[b];
        str[b] = temp;
        a++;
        b--;
    }
    return;
}
int main()
{
    char str[40];
    printf("Enter your sentence : ");
    fgets(str, 40, stdin);
    str[strcspn(str, "\n")] = '\0';
    int idx = 0;
    int size = 0;
    while (str[idx] != '\0')
    {
        size++;
        idx++;
    }
    int a = 0;
    for (int i = 0; i <= size; i++)
    {  /* here I have done i <= size because I want loop to go till '\0' */
        if (str[i] == ' ' || str[i] == '\0')
        {
            reverseWord(str, a, i - 1);
            a = i + 1;
        }
    }
    printf("%s", str);
    return 0;
}
