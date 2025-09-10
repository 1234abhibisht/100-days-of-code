#include <stdio.h>
void multiplication(int n) {
    int mul = 1;
    for(int i = 2; i <= 2 * n; i++) {
        if(i % 2 == 0) {
            mul = mul * i;
        }
    }
    printf("multiplication of first %d even natural numbers is : %d",n,mul);
}
int main() {
    int n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    multiplication(n);
    return 0;
}
