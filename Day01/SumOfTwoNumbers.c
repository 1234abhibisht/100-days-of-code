/* Sum of two numbers taken from user */
#include <stdio.h>
int sum(int a, int b) {
    int z=a+b;
    printf("Sum of %d and %d is : %d",a, b, z);
    return z;
}
int main(int argc, char *argv[]) {
    int a;
    printf("Enter your first number : ");
    scanf("%d",&a);
    int b;
    printf("Enter your second number : ");
    scanf("%d",&b);
    sum(a,b);
    return 0;
}
