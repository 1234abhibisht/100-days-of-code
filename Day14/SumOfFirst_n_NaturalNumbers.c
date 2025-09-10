#include <stdio.h>
void sum(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("Sum of first %d natural numbers is : %d",n,sum);
}
int main() {
    int n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    sum(n);
    return 0;
}
