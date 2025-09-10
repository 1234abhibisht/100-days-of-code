#include <stdio.h>
void factorial(int n) {
    int mul = 1;
    for(int i = n; i >= 1; i--) {
         mul = mul * i;
    }
    printf("Factorial of %d! is : %d",n,mul);
}
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    factorial(n);
    return 0;
}
