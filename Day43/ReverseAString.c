#include <stdio.h>
#include <string.h>
void reverseString(char str[], int count)
{
    int i = 0;
    int j = count - 1;
    while (i < j)
    {
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("Reversed string is : %s", str);
    return;
}
int main()
{
    char str[40];
    printf("Enter your string : ");
    scanf("%[^\n]s", str);
    /* here we dont know actual size of string which user will give */
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    reverseString(str, count);
    return 0;
}
