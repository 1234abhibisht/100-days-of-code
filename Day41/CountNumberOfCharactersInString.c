#include <stdio.h>
int main()
{
    char str[40];
    printf("Enter your string : ");
    scanf("%[^\n]s", &str);
    /* we have declared size of string 40 but we dont know upto how much size user will input */
    /* we know a property that when user input a string in str, computer will automatically
       assign a NULL character '\0' at end of string where it is fininsed */
    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    printf("Number of characters in string are %d",count);
    return 0;
}
