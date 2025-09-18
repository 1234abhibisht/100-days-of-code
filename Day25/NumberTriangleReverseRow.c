/* print    5
            4 5
            3 4 5
            2 3 4 5
            1 2 3 4 5*/

#include <stdio.h>
void triangle(int n) {
    for(int i = n; i >= 1; i--) {  /* horizontal rows */
        int x = i;
        for(int j = n; j >= i; j--) {  /* vertical columns */
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
