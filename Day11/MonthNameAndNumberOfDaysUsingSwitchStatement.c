#include <stdio.h>
int main()
{
    int a;
    printf("Enter month number from 1 to 12 : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("January has 31 days");
        break;
    case 2:
        char response;
        printf("Enter whether it is leap year or not\n");
        printf("If it is leap year enter 'y' or not a leap year enter 'n'\n");
        printf("Enter your response : ");
        scanf(" %c", &response); /* space is used as we have already scanf in int a so to skip input error we have done this*/
        if (response == 'y')
            printf("February has 29 days");
        else if (response == 'n')
            printf("February has 28 days");
        else
            printf("Invalid Input");
        break;
    case 3:
        printf("March has 31 days");
        break;
    case 4:
        printf("April has 30 days");
        break;
    case 5:
        printf("May has 31 days");
        break;
    case 6:
        printf("June has 30 days");
        break;
    case 7:
        printf("July has 31 days");
        break;
    case 8:
        printf("August has 31 days");
        break;
    case 9:
        printf("September has 30 days");
        break;
    case 10:
        printf("October has 31 days");
        break;
    case 11:
        printf("November has 30 days");
        break;
    case 12:
        printf("December has 31 days");
        break;
    }
    return 0;
}
