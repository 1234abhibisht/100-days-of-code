/* fine will be of ruppees 2 for one day late submission and will increase
   by ruppees 4 for more than one day 
   EX - for one day late submission - 2 ruppees
        for two day late submission - 6 ruppees
        for three day - 10 ruppees 
        for four day - 14 ruppees*/
   
#include <stdio.h>
void fine(int days) {
    if(days == 1) {
        printf("Fine is of ruppees : 2");
    }
    else if(days > 1 && days < 31) {
        int x = days * 4 - 2;
        printf("Fine is of ruppees : %d",x);
    }
    else {
       printf("Membership cancelled");
    }
}   
int main() {
    int days;
    printf("Enter number of days you are late for submission : ");
    scanf("%d",&days);
    fine(days);
    return 0;
}
