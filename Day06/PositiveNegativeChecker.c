#include <stdio.h>
int PositiveNegative(int n) {
    if(n>0) {
        printf("%d is positive",n);
    }
    else if(n<0) {
        printf("%d is negative",n);
    }
    else {
        printf("%d is zero");
    }
}
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    PositiveNegative(n);
    return 0;
}
