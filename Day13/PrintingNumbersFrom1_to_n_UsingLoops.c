#include <stdio.h>
int numbers(int n) {
    for(int i = 1; i <= n; i++) {
        printf("%d ",i);
    }
    return 0;
}
int main() {
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    numbers(n);
    return 0;
}
