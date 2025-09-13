#include <stdio.h>
void factors(int n) {
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d ",i);
        }
    }
}
int main() {
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    factors(n);
    return 0;
}
