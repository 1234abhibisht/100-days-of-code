#include <stdio.h>
void year(int x) {
    if(x%4 == 0) printf("%d is a leap year",x);
    else printf("%d is not a leap year",x);
}
int main() {
    int x;
    printf("Enter year : ");
    scanf("%d",&x);
    year(x);
    return 0;
}
