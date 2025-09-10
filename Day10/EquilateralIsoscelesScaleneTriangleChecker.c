#include <stdio.h>
int triangle(int a,int b,int c) {
    if(a == b && a == c ) {
         printf("Trignale is Equilateral");
    }
    else if(a == b && a !=c || b == c && b != a || a == c && a != b) {
        printf("Triangle is Isosceles");
    }
    /* && will execute before || */
    else if(a != b && a != c && b != c) {
        printf("Triangle is Scalene");
    }
    else {
        printf("Invalid Operation");
    }
}
int main() {
    int a;
    printf("Enter first side : ");
    scanf("%d",&a);
    int b;
    printf("Enter second side : ");
    scanf("%d",&b);
    int c;
    printf("Enter third side : ");
    scanf("%d",&c);
    triangle(a,b,c);
    return 0;
}
