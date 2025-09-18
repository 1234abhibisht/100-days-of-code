#include <stdio.h>
int triangle(int n) {
    for(int i = 1; i <= n; i++) {  /* horizontal rows */
        int x = 1;
        for(int j =1; j <= i; j++) {  /* vertical columns */
            printf("%d ",x);
            x++;
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    triangle(n);
    return 0;
}
