#include <stdio.h>
void triangle(int n) {
    for(int i = 1; i <= n; i++) {  /* horizontal rows */
        for(int j = 1; j <= n + 1 - i; j++) {  /* vertical columns */
            printf("* ");
        }
        printf("\n");
    }
    return;
}
int main() {
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    triangle(n);
    return 0;
}
