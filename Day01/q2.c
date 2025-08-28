/* difference, product, quotient and remainder of two numbers taken from user */
#include <stdio.h>
int difference(int a, int b) {
    int w=a-b;
    printf("Difference of %d and %d is : %d \n",a, b, w);
    return w;
}
int product(int a, int b) {
    int x=a*b;
    printf("Product of %d and %d is : %d \n",a, b, x);
    return x;
}
int quotient(int a, int b) {
    float y=a/b;
    printf("quotient of %d/%d is : %f \n",a, b, y);
    return y;
}
int remainder(int a, int b) {
    float z=a%b;
    printf("Remider of %d/%d is : %f",a, b, z);
    return z;
}
int main(int argc, char *argv[]) {
    int a;
    printf("Enter first number : ");
    scanf("%d",&a);
    int b;
    printf("Enter second number : ");
    scanf("%d",&b);
    difference(a,b);
    product(a,b);
    quotient(a,b);
    remainder(a,b);
    return 0;
}
